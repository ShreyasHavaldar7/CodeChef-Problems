import java.lang.*;
import java.util.*;

class HP18
{

    public static void main(String[] args) {
        

        Scanner in = new Scanner(System.in); int i;

        int T =Integer.parseInt(in.nextLine());
        long seq[]= new long[200000]; int N=0; int a=0; int b=0; int k=0,l=0,m=0;
        

        for(i=0; i<T; i++)
        {
            
            
            N=0;a=0;b=0;k=0;l=0;m=0;
            N=in.nextInt();
            a=in.nextInt();
            b=in.nextInt();


            for(int j=0; j<N; j++)
            {
                seq[j]=in.nextLong();
                if((seq[j]%a==0)&&(seq[j]%b==0))
                {
                    
                    k++;
                }
                else if(seq[j]%a==0)
                    {
                   
                    l++;
                }
                else if(seq[j]%b==0)
                    {
                
                    m++;
                }



            }




            
            if((l>m)||((l==m)&&(k!=0)))
                System.out.println("BOB");
            else if((m>l)||((l==m)&&(k==0)))

                System.out.println("ALICE");


            

        }
            
       
        





    }
        }


