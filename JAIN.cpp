
#include <iostream>
#define ll long long int
#include <cmath>

using namespace std;

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	    int N;
	    cin >> N;
	    
	    ll p[32]={0};
	    
	    for(int i=0; i<N;i++)
	    {
	        
	        ll vo[5]={0};
	        
	        string word;
	        cin >> word;
	        
	        for(int i=0; i<word.length();i++)
	        {
	            
	            switch (word[i])
	            {
	                
	             case 'a': vo[0]++; break;   
	             case 'e': vo[1]++; break;  
	             case 'i': vo[2]++; break;  
	             case 'o': vo[3]++; break;  
	             case 'u': vo[4]++; break;  
	                
	                
	                
	                
	            }
	            
	            
	            
	            
	        }
	        
	        int sum=0;
	        for(int i=0; i<5;i++)
	        {
	            if(vo[i]>0)
	                sum+= pow(2, 4-i);
	            
	            
	        }
	        
	        
	      p[sum]++;  
	        
	        
	    }
	    
	    
	    
	    
    ll out=0;
	for(int i=0; i<31;i++)
	{
	    for(int j=i+1; j<32;j++)
	    {
	        int r= i|j;
	        
	        if(r==31)
	        {
	         out+= (p[i]*p[j]);   
	        }
	        
	        
	    }
	}
	
	
	out = out + (p[31]*(p[31]-1))/2;
	cout << out << endl;
	    
	    
	    
	}
	
	
	
	
	
	
	
	
	return 0;
}
