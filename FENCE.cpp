#include <iostream>
#define ll long long int
#include <algorithm>

using namespace std;

struct point
{
	int x;
	int y;
	
};
bool acompare1(point lhs,point rhs) { return lhs.x < rhs.x; }
bool acompare2(point lhs,point rhs) { return lhs.y < rhs.y; }
int main()
{	
	int T; ll val=0;
	cin >> T;
	point a[100001];
	
	while(T--)
	{

	    ll N; ll M; ll K; ll I=0; ll J=0; ll S=0;
	    cin >> N;
	    cin >> M;
	    cin >> K;

	    

	    val=4*K;
	    
	    
	    
	    for(ll i=0; i<K;i++)
	    {
	        
		cin >> a[i].x;
		cin >> a[i].y;

	    
	    
		}

		stable_sort(a, a + K,acompare1);
		stable_sort(a, a + K,acompare2);
		
		for(ll i=0; i<K-1;i++)
	    {
	        
	       
	        if(a[i+1].x==a[i].x+1&&a[i+1].y==a[i].y)
	        	S++;
	    	
	    
		}

		stable_sort(a, a + K,acompare2);
		stable_sort(a, a + K,acompare1);
	
		for(ll i=0; i<K-1;i++)
	    {
	         if(a[i+1].y==a[i].y+1&&a[i+1].x==a[i].x)
	        	S++;
	    	
	    
		}	
		S=4*K-2*S;
	cout<<S<<endl;
	}
	
	
	
	return 0;
}





	