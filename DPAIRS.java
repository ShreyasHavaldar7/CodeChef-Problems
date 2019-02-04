import java.lang.*;
import java.util.*;

class DPAIRS
{
   
       public static void main(String args[])
      {
        int N=0,M=0; int A[] =new int[200000];int B[] =new int[200000]; int min=0; int max=0;
        Scanner in= new Scanner(System.in);
        
      
        N=in.nextInt();M=in.nextInt();
        
        for(int i=0; i<N; i++)
        {
            A[i]=in.nextInt();
            
            if (A[i]<A[min])
            min=i;
        
        
        }
        
        
        
        for(int i=0; i<M; i++)
        {
            B[i]=in.nextInt();
            
            if (B[i]>B[max])
            max=i;
        
        }
        
        
          
        for(int i=0; i<M; i++)
        {
            System.out.println(min + " " + i);
        
        }
        
         for(int i=0; i<N; i++)
         {   
            if(i!=min)
            System.out.println(i + " " + max);
        
        }
        
        
      
         
                 
        
        }
}
