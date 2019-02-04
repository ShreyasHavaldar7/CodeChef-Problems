import java.lang.*;
import java.util.*;


class FANCY
{
    public static void main(String args[])
    {    Scanner in = new Scanner(System.in);
        int T = Integer.parseInt(in.nextLine());
        String S=""; int n; String sub=""; int p=0; int c=0;
        
        for(int j=0; j<T; j++)
        {
        
            sub="";p=0;c=0;
        S = in.nextLine();
        n=S.length();
        S= S+ " ";
        p= S.indexOf(' ');
        
        sub= (String)(S.subSequence(0,p));
        
        if(sub.compareTo("not")==0)
                {
                    c=-1;
                    
                }
                else
                {
                    
                sub="";
        
               for(int i=p; i<=n; i++)
            {
            
            
              if(S.charAt(i)==' ')
              {
                if(sub.trim().compareTo("not")==0)
                {  c=-1;
                    break;
                }
                else
                sub="";
                
               }
        
        
               sub = sub + S.charAt(i);
               
        
        
            }
        }
        
        if(c==-1)
        System.out.println("Real Fancy");
        else
        System.out.println("regularly fancy");
        
        
        }
        
        
        
        
        
        
        
        
        
    }
        
}

