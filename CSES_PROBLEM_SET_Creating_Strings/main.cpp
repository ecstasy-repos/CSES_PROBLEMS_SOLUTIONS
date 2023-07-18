#include<bits/stdc++.h>
using namespace std;


vector<string> getAllString(string s){
    if(s.length() == 1){
        vector<string>ans;
        ans.push_back(s);
        return ans;
    }
    char t = s[0];
    vector<string> temp = getAllString(s.substr(1));
    vector<string>ans;
    for(int i=0; i< temp.size(); i++){
        for(int j=0; j<=temp[i].length(); j++){
            string p1 = temp[i].substr(0, j);
            string p2 = temp[i].substr(j);
            ans.push_back(p1 + t + p2);
        }
    }
    return ans;
}

int main(){

    string s;
    cin >> s;
    vector<string>out = getAllString(s);
    set<string>ans;
    for(auto t: out){
        ans.insert(t);
    }
    cout << ans.size() <<"\n";
    for(auto r: ans){
        cout << r <<"\n";
    }
}