import java.util.*;
import java.lang.*;
class MGAME
{
    
    public static void main (String args[])
    {
        
        
        Scanner in= new Scanner(System.in);
        int T=in.nextInt();int N=0;int P=0;int M=0; long ways=0;
        for(int i=0;i<T;i++)
        {
            N=0;P=0;M=0;
            N=in.nextInt();
            P=in.nextInt();
            M=(N-1)/2;
            ways=0;
            if(M==0)
            ways=P*P*P;
            else
            
            ways=1*(P-M)*(P-M)+ (P-N)*1*(P-M) + (P-N)*(P-N)*1;
                        
           
            System.out.println(ways);
            
            
            
            
        
        
        
        
        
        
        
        
        
        }
        
    
    
    
    
    
    
    
    
    
    
    }
    
}
