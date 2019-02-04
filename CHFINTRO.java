import java.util.*;
import java.lang.*;
class CHFINTRO
{
       public static void main(String args[])
      {
        int n=0; int r=0; 
        Scanner in= new Scanner(System.in);
        n=in.nextInt();
        r=in.nextInt();
        
        int p[]= new int[n];
      
       
         for(int i=0; i<n; i++)
          {
             
            p[i]=in.nextInt();
            if(p[i]>=r)
            System.out.println("Good boi");
            else
             System.out.println("Bad boi");
            
           }
          
          
        
      
         
                 
        
        }
}
            
           