#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    if(n<4){
        if(n==1){
            cout << 1 << endl;
        }else
            cout << "NO SOLUTION";
    }else{
        
        for(int i=2; i<=(n%2==0 ? n: n-1); i+=2){
            cout << i << " ";
        }
        for(int i=1; i<=(n%2==1? n: n-1); i+=2){
            cout << i << " ";
        }
    }
    
}