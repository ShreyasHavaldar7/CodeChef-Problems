#include <iostream>
#include <vector>
#define ll unsigned long long int
#define f(i,k,j) for(ll i=k; i<j; i++)
#include <cmath>
#include <limits.h>
#include<string>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;



int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL); 

ll n=0; ll a[200007] = {0}; ll sum=0; ll mid=0; ll k=0; ll diff=0; ll val=0; ll temp=0;
cin >> (n); cin >> (k);
mid = (n-1)/2;

f(i, 0, n) {
    cin >> a[i];
    
    
}

sort(a, a+n);

val = a[mid];
f(i, mid+1, n) {
    diff = (a[i] - val);
    if(k>=(diff*(i-mid))) {
        val = val + diff;
        k = k - (diff*(i-mid));
    } else {
        temp=i;
        break;
    }
        
}
if(temp == 0) {
    temp = n;
}
val = val + k/(temp-mid);

cout << val <<"\n";



return 0; 
} 
