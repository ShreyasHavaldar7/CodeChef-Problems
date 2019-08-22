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

ll N=0; ll a[100001] = {0}; ll sum=0; ll maxx=0;
cin >> N;

f(i, 0, N) {
    cin >> a[i];
    sum = sum + a[i];
    if(a[i]> maxx) {
        maxx= a[i];
    }
}

if((sum % 2 == 0) && (sum- maxx) >= maxx) {
    cout << "YES" <<"\n";
}   else {
    cout << "NO" << "\n";
}



return 0; 
} 
