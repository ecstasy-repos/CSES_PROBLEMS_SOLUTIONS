#include <bits/stdc++.h>
using namespace std;


void solve(string l, string m, string r, int n){
    if(n == 0){
        return;
    }
    solve( l, r, m, n-1);
    cout << l << " " << r <<"\n";
    solve(m,l, r, n-1);
}\

int main(){
    int n;
    cin >> n;
    cout << (1 << n)-1 << "\n";
    solve("1", "2", "3", n);
}