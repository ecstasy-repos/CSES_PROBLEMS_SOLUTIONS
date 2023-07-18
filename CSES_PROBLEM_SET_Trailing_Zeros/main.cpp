#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long int n;
    cin >> n;
    
    long long ans = 0;
    long long temp = n/5;
    long long f = 5;
    while(temp){
        ans += temp;
        f = f*5;
        temp = n/f;
    }
    
    cout << ans << "\n";
}