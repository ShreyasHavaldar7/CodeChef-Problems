#include <iostream>
#include <vector>
#define ll long long int
#define f(i,k,j) for(ll i=k; i<j; i++)
#include <cmath>
#include <limits.h>
#include<string>
#include <algorithm>
#include <numeric>

using namespace std;
 
struct save
{
	ll idx;
	ll val;
	
};


bool acompare(save lhs, save rhs) { return lhs.val < rhs.val; }


int main() {
    
    int T=0;

    cin >> T;

    while(T--) {

        ll N=0; ll res=0; ll pen=0;ll A[100007]={0}; save H[100007]; ll X=0; ll start =0; ll end=0; long long int len=0;
        cin >> N; 
        
        

        f(i,0,N) {
            cin >> A[i];
            
        }             
        H[0].val=0;
        H[0].idx = 0;
        f(i,1,N+1) {
            H[i].val =  H[i-1].val ^ A[i-1];
            H[i].idx = i;
                        
        }

        
        stable_sort(H, H + N+1,acompare);

        //f(i, 0, N+1) {
         // cout << H[i].val <<".." <<H[i].idx <<"\n";        }
        
    ll p=0;
    ll i=0;
    ll j=1;
        while(i<N){
            p=0;
            while(H[i].val== H[j].val) {
                p++;
                j++;

            }               
                    
               
                    res=res-(p*(p+1))/2;
                    for(long long int k=j-1;k>=i;k--){
                        res=res+p*(H[k].idx);
                        
                    p=p-2;
                    }
                    
 
            i=j;
            
           j++;            
        }

        


        cout << res << "\n";

        

    }
   
    return 0;
}