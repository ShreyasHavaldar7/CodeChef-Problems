#include <iostream>
#define ll long long int
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int T=0; 

    cin >> T;

    while (T--)
    {
        ll N=0; ll val[100001]={}; double mean =0; ll sum=0; ll pos =-1;
        cin >> N;

        for(ll i =0; i< N; i++) {
            cin >> val[i];
            sum = sum + val[i];
        }

        mean = sum*1.0/N;

        for(ll i =0; i< N; i++) {
            if(mean == val[i]) {
                pos = i+1;
                break;
            }
        }

        if(pos>=0) {
            cout << pos <<"\n";
        }
        else {
            cout << "Impossible\n";
        }  
        
    

        
    }
    
return 0;

}
