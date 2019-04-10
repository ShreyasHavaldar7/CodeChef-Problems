import java.util.*;
import java.lang.*;
class MAXREM
{
       public static void main(String args[])
      {
        int n=0; long max=0; long max2=0;
        Scanner in= new Scanner(System.in);
        n=in.nextInt();
        
        
        long p[]= new long[n];
      
       
         for(int i=0; i<n; i++)
          {
             
            p[i]=in.nextLong();
            
            if(p[i]>=max)
            {   
                if(p[i]!=max)
                max2=max;
                
                max=p[i];
           
            }
            
            else if(p[i]>max2)
            {
                max2=p[i];
                
           
            }
           }
           
           if(max2!=max)
           System.out.println(max2); 
           
           else
           System.out.println("0"); 
        
        }
}
            
           