#include <bits/stdc++.h>
using namespace std;

long long int ModExp(long long int x, unsigned int y, long long int p)
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

int main(){
    int n;
    cin >> n;
    cout << ModExp(2, n, 1e9 + 7);
}