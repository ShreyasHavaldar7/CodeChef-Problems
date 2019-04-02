import java.lang.*;
import java.util.*;

class CHNUM{
	
	public static void main (String[] args) {
		int N=0; int inp=0; int l=0; int m=0; int n=0; int max=0; int min=0;
		
		Scanner in = new Scanner(System.in);
		 int T=in.nextInt();
		 
		 for(int i=0; i<T; i++)
		 {	
			 l=0;m=0;n=0;
			 N=in.nextInt();
			 
		
			 
			 for(int j=0; j<N; j++)
			 {
				 inp=in.nextInt();
				 if(inp>0)
				 { 
					 l++;
				 
					}
					else if(inp<0)
					{
						m++;
						}
						else if(inp==0)
						{
						n++;
							}
				 
				 
				 }
		 
			
			 max=Math.max(l,m);
			 min=Math.min(l,m);
			 
			 max=max+n;
			 
			 if(max==0)
			 max=min;
			 
			 if(min==0)
			 min=max;
			 
			 
			 
			 System.out.println(max + " " + min);


			 
			 
			 }
		
		
		
		
	}
}


