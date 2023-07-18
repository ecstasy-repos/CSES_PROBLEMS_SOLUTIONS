#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int map[26] = {0};
    
    for(int i=0; i<s.length(); i++){
        map[s[i] - 'A']++;
    }
    
    int countOdd = 0;
    char oddChar = '$'; 
    for(int i=0; i<26; i++){
        int p = map[i];
        if(p%2 == 1){
            oddChar = (char)('A' + i);
            countOdd++;
        }
        if(countOdd > 1){
            cout << "NO SOLUTION\n";
            break;
        }
        
    }
    
    if(countOdd <=1){
        int l = 0;
        int r = s.length() - 1;
        for(int i=0; i<26; i++){
            int t = map[i];
            if(t%2 == 1){
                t--;
                s[s.length()/2] = oddChar;
            }
            for(int j=0; j<t/2; j++){
                s[l++] = (char)('A' + i);
                s[r--] = (char)('A' + i);
            }
        }
         cout << s << endl;
    }
    
   
}