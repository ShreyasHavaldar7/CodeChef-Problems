#include <iostream>
#define ll unsigned long long int
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
    ll N; ll K;
    cin >> N; cin >> K;
    
    N=N/K;
    if((N % K) == 0) {
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
    }

    
    
    }
    
    

return 0; 
} 
