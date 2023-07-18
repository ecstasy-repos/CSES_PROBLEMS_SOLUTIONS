#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a, b;
        cin >> a >> b;
        long long l = (2*a - b)/3;
        long long m = (2*b - a)/3;
        
        if(l >=0 && m >=0 && ((2*a - b)%3 == 0) && ((2*a - b)%3 == 0) ){
            cout <<"YES\n";
        }else{
            cout <<"NO\n";
        }
    }
}