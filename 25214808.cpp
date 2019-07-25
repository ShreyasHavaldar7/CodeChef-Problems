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
 

int main() {
    
    int T=0;

    cin >> T;

    while(T--) {

        int N=0;ll mi =LLONG_MAX; ll res=0; ll pen=0;ll a[401]={0}; ll dp[401][401]={0}; ll sum[401][401]={0};
        cin >> N; 

        f(i,0,N) {
            cin >> a[i];
            
        }
        
         f(i,0,N) {
            
        }

        f(i,0,N) {
            f(l,1,N+1) {
                
                sum[i][l]=sum[i][l-1]+a[((i+l-1)%N)];
                
            }
        }
       
         
        
            f(l, 2, N+1) {
                f(i,0,N) {

                mi = LLONG_MAX;
                
                f(k, 1, l) {
                    res= dp[i][k] + dp[((i+k)%N)][l-k] + sum[i][k] + sum[((i+k)%N)][l-k];
                    mi = min(mi, res);
                }

                
                dp[i][l]=mi;
                
            }
            
        }

        pen=dp[0][N];
           
        f(i,1,N) {
            pen=min(pen,dp[i][N]);
        }

        cout << pen <<"\n";

    }
   
    return 0;
}