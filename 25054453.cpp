#include <iostream>
#define ll long long int
#include <cmath>
#include <string.h>
#include <algorithm>

using namespace std;

ll mod(string inp, ll N) {
    ll res = 0;
    
    for(int i=0; i<inp.length(); i++) {
        res = (res*10 + (int)inp[i] - '0')%N;
    }

return res;
}

int main() {
    int T=0; 

    cin >> T;

    while (T--)
    {
        ll N=0; ll K=0; ll val=0; string inp="";
        cin >> N;
        cin >> inp;

        K=mod(inp, N);

        val = min((2*(N-K)),2*K);
        
        if(2*K==N)
            val--;
            
        cout << val <<"\n";
    }
    
return 0;

}