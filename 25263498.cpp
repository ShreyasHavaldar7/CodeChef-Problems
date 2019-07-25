#include <iostream>
#define ll long long int
#include <cmath>
#include <string.h>
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
    
    ll S[200001]={0};    

    ll X=0; ll Q=0; ll eve=0; ll odd =0; ll len=0; ll c=0;; int par=-1; ll ele=0; ll h[200001] ={0};


    cin >> Q;

    while(Q--) {
        X=0; 
        c=0;
        cin >> X;
                               
                if(h[X]!=X) {
                
                
                for(ll i=0; i<len; i++) {
                    
                    S[len+i]=(S[i]^X);
                    h[S[i]^X]=S[i]^X;
                    
                }
                len = 2*len +1;
                S[len-1] = X;
                h[X]=X;
                
                
                
                
                               
                par =(__builtin_popcount (X))%2;

                
                
           if(par == 0) {
                eve=eve+eve+1;
                odd= odd + odd;

            } else {
                 ele =odd;
                 odd= odd+ eve + 1;
                 eve = eve + ele;
             }
                
                }
            
               cout << eve <<" "<< odd << "\n"; 
       
      

    }
    
    
}
return 0; 
} 
