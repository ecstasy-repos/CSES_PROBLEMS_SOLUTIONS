#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int k;
    cin >> k;
    
    for(long long int i=1; i<=k; i++){
        cout << ((i*i)*(i*i-1)/2) - 4*(i-1)*(i-2) << "\n";
    }
}