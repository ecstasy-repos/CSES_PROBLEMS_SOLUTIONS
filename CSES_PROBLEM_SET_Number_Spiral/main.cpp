
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int y, x;
        cin >> y >> x;
        if(x == y){
            cout << x*x - x + 1 << "\n";
        }else if(x > y){
            if(x%2==0){
                cout << (x-1)*(x-1) + y << "\n";
            }else{
                cout <<x*x - y + 1 << "\n";
            }
        }else{
            if(y%2==0){
                cout << y*y - x + 1 <<"\n";
            }else{
                cout << (y-1)*(y-1) + x << "\n";
            }
        }
    }
    
    
}