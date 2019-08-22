#include <iostream>
#define ll long long int
#include <cmath>
#include <string>
#include <algorithm>
#include <set>
#include <bits/stdc++.h> 
#include <vector>

using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T;
cin >> T; 
while(T--) {

    string S=""; ll c=0;
    ll i=0; cin >> S;
    while(i< S.length()) {
        

        if(S[i]== '1') {
            c++;
        }
        
        i++;

    }

    if(c%2 == 1) {
        cout << "WIN" << "\n";
    } else {
        cout << "LOSE" << "\n";
    }

    
    
    }
    
    

return 0; 
} 
