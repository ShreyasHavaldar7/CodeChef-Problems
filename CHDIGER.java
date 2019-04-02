import java.lang.*;
import java.util.*;

class CHDIGER{
	
	public static void main (String[] args) {
		long N=0; int inp=0; int l=0; long m=0; long n=0; long q=0; long c=0; int d=0; String f=""; long dig[]=new long[40];
		String s=""; int min=9;
		
		Scanner in = new Scanner(System.in);
		 int T=in.nextInt();
		 
		 for(int i=0; i<T; i++)
		 {	
			 l=0;m=0;n=0;N=0; q=0; c=0; d=0; f="";
			 N=in.nextLong();
			 d=in.nextInt();
			 s=Long.toString(N);
			 l=s.length();
			 
			for(int j=l-1; j>=0; j--)
			{
				dig[j]=N%10;
				N=N/10;
				
				
				
			}
			if(dig[l-1]>=d)
			dig[l-1]=d;
			min=(int)dig[l-1];
			
			for(int j=l-2; j>=0; j--)
			{
				if(dig[j]<min)
				min=(int)dig[j];

				if(dig[j]>min )
				{
				dig[j]=-1;
				c++;
				
				}
				
				
			}
			 
			 
				 
			for(int j=0; j<l; j++)
			{

				if(dig[j]!=-1)
				{
				System.out.print(dig[j]);
				
				}
				
				
			}
			
			for(int j=0; j<c; j++)
			{

				System.out.print(d);
				
				
			}
			System.out.println();
			
			
			
				 
			
				
			 
		
		
		
		
	}
}
}


