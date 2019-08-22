#include <iostream>
#define ll long long int
#define f(i,k,j) for(ll i=k; i<j; i++)
#define g(i,k,j) for(ll i=k; i>=j; i--)
#include <cmath>
#include <string>
#include <limits.h>
#include <algorithm>
#include <set>
#include <bits/stdc++.h> 
#include <vector>

using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
int T;
cin >> T; 
while(T--) {

    ll C[100001]; ll H[100001]; ll N=0;  ll c=0; ll p=0; ll R[100001]={0}; ll L[100001]={0}; ll Q[100001]={0};
     cin >> N;  ll beg=0; ll end=0;

    f(i, 0, N) {
        cin >> C[i];
                
    }   

    f(i, 0, N) {
        cin >> H[i];
    }

    f(i, 0, N) {
        if((i+C[i]+1) < N) {
            R[i + C[i] + 1]++;
        }
    }

    f(i, 1, N) {
        R[i] = R[i-1] + R[i];
    }

    g(i, N-1, 0) {
        if((i-C[i]-1) >=0 ) {
            L[i - C[i] - 1]++;
        }
    }

    g(i, N-2, 0) {
        L[i] = L[i+1] + L[i];
    }


    f(i, 0, N) {
        Q[i] = N - R[i] - L[i];
        

    }

    stable_sort(Q, Q+N);
    stable_sort(H, H+N);

    f(i, 0, N) {
        if(Q[i]!=H[i]) {
            
            c=-1;
            break;

        }
    }



    if(c==0) {
        cout << "YES" << "\n";
    }

    else {
        cout << "NO" << "\n";
    }
    

      
    
    }
    
    

return 0; 
} 
