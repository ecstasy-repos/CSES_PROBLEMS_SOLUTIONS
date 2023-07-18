#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    long long int n;
    cin >> n;
    set<long long int>s;
    for(long long int i=n; i>=1; i--){
        s.insert(i);
    }
    long long int t = n*(n+1)/2;
    set<long long int>s1;
    if(t%2==0){
        long long int half_sum = t/2;
        long long int temp = 0;
        auto itr = s.rbegin();
        for (itr = s.rbegin(); itr != s.rend(); itr++){
            long long int q = *itr;
            if(temp + q <= half_sum){
                temp += q;
                s1.insert(q);
            }else{
                break;
            } 
        }
        if(half_sum - temp != 0){
            s1.insert(half_sum - temp);
        }
        cout <<"YES"<<"\n";
        cout<<s1.size() <<"\n";
        for(auto itr=s1.begin(); itr!= s1.end(); itr++){
            cout << *itr << " ";
        }
        cout <<"\n";
        cout << n-s1.size() <<"\n";
        for(auto itr=s.begin(); itr!= s.end(); itr++){
            long long int x = *itr; 
            if(s1.find(x) != s1.end()){
                
            }else{
                cout << x << " ";
            }
            
        }
        
    }else{
        cout <<"NO\n";
    }
}
