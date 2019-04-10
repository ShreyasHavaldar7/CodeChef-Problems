import java.lang.*;
import java.util.*;


class strch
{
    public static void main(String args[])
    {   Scanner in = new Scanner(System.in);
        long T = in.nextInt();
        String S=""; long n=0; char c=' '; long i2=0; long i1=-1; long val=0;
        
        for(long j=0; j<T; j++)
        {
        
        n=in.nextLong();
        i1=-1;
        val=0;
        i2=0;
        
        S=in.next();
        c=in.next().charAt(0);
     
        for(int i=0; i<n; i++)
        {
            if(S.charAt(i)==(c))
            {   i2=i;
                val+=(i2-i1)*(n-i2);
                
                i1=i2;
            }  
       
        }
       
        System.out.println(val);
        
        }
        
    }
        
}
