#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    for(long long int i=0; i<(1 << n) ; i++){
        
        long long int t = i ^ (i/2);
        bitset<32>temp(t);
        cout << (temp.to_string()).substr(32-n) <<"\n";
    }
    
}