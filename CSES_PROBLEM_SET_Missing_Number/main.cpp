#include<bits/stdc++.h>
using namespace std;
 
long long int ModExp(long long x, unsigned int y, int p)
{
    long long int res = 1;
 
    x = x % p; 
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
 
     
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
 
long long int count(vector<string>arr, int n){
    
    vector<int>noCharWithOddCount;
    
    for(int i=0; i<n; i++){
        map<char, int>cnt;
        for(int j=0; j<arr[i].length(); j++){
          cnt[arr[i][j]]++;
        }
        int res = 0;
        for(auto p=cnt.begin(); p<cnt.end(); p++){
            if((p->second)%2 == 1){
                res++;
            }
        }
        noCharWithOddCount.push_back(res);
    }
    
    for(auto x: noCharWithOddCount){
        cout << x <<" ";
    }
    
    
}

 
int main(){
    vector<string>arr = {"aaacccceee", "bdjf"}
    cout << count(arr, 2);
}