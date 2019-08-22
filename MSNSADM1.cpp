#include <iostream>
#define ll long long int
#define f(i,k,j) for(ll i=k; i<j; i++)
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
cin.tie(NULL);
int T;
cin >> T; 
while(T--) {

    int A[151]; int B[151];int N=0;
     cin >> N; int maxx = -1 * INT_MAX; ll val=0;

    f(i, 0, N) {
        cin >> A[i];
    }

    f(i, 0, N) {
        cin >> B[i];
    }

    f(i, 0, N) {
        val = 20 * A[i] - 10 * B[i];
        if(val >= maxx) {
            maxx = val;
        }

    }

    
    

    if(maxx < 0) {
        cout << "0" << "\n";
    } else {
        cout << maxx << "\n";
    }

    
    
    }
    
    

return 0; 
} 
