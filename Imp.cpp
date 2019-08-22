#include <iostream>
#include <vector>
#define ll long long int
#define f(i,k,j) for(ll i=k; i<j; i++)
#include <cmath>
#include <limits.h>
#include<string>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h> 

using namespace std;

int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n=0; int m=0; string A[1001]; ll sum=0; int maxx=0; int c[5]={0}; ll val=0; int a[1001];
cin >> n; cin >> m;

f(i, 0, n) {
    cin >> A[i];
    
}

f(i, 0, m) {
    cin >> a[i];
    
}

f(i, 0, m) {
    c[0]=c[1]=c[2]=c[3]=c[4]=0;
    f(j, 0, n) {
        c[A[j][i] - 65]++;

    }
    maxx = max(c[0], max(c[1], max(c[2], max(c[3], c[4]))));
    val = val + a[i] * maxx; 


    
}

cout<< val <<"\n";



return 0; 
} 
