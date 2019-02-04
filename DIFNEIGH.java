import java.lang.*;
import java.util.*;

class DIFNEIGH
{

    public static void main(String[] args) {
        

        Scanner in = new Scanner(System.in); int i;

        int T =Integer.parseInt(in.nextLine());
         int N=0; int M=0;  int K=0;
        

        for(i=0; i<T; i++)
        {
            
            
            N=0;M=0;K=0;
            N=in.nextInt();
            M=in.nextInt();
            
            if(N==1&&M==1)
            {
                System.out.println("1");
                System.out.println("1");
            } 
            else if(N==1&&M==2)
            {
                System.out.println("1");
                System.out.println("1 1");
            } 
            else if(N==2&&M==1)
            {
                System.out.println("1");
                System.out.println("1");
                System.out.println("1");
            }
            else if(N==1)
            {
                System.out.println("2");
                for(int j=0; j<M; j++)
                {
                    if(j%4==0 || j%4==1)
                    {
                    System.out.print("1");
                     if(j!=M-1)
                    System.out.print(" ");
                }
                 else if(j%4==2 || j%4==3)
                    {
                    System.out.print("2");
                     if(j!=M-1)
                    System.out.print(" ");
                }
                }
                System.out.println("");
            }
            else if(M==1)
            {
                System.out.println("2");
                for(int j=0; j<N; j++)
                {
                    if(j%4==0 || j%4==1)
                    {
                    System.out.println("1");
                    
                }
                 else if(j%4==2 || j%4==3)
                    {
                    System.out.println("2");
                    
                }
                }
            }
            else if(N==2&&M==2)
            {
                System.out.println("2");
                System.out.println("1 1");
                System.out.println("2 2");
            }
            else if(N==2)
            {
                System.out.println("3");
                
            
                for(int k=0; k<M; k++)
                {
                   
                        if(k%6==0||k%6==1)
                        System.out.print("1");
                        else if(k%6==2||k%6==3)
                        System.out.print("2");
                        else if(k%6==4||k%6==5)
                        System.out.print("3");
                    
                    if(k!=M-1)
                    System.out.print(" ");
                
                }
                System.out.println("");
                

                for(int k=0; k<M; k++)
                {
                   
                        if(k%6==3||k%6==4)
                        System.out.print("1");
                        else if(k%6==5||k%6==0)
                        System.out.print("2");
                        else if(k%6==1||k%6==2)
                        System.out.print("3");
                    
                    if(k!=M-1)
                    System.out.print(" ");
                
                }
                System.out.println("");

       
            
            }
            else if (M==2)
            {System.out.println("3");
              for(int k=0; k<N; k++)
                {
                   
                        if(k%3==0)
                        System.out.println("1 1");
                        else if(k%3==1)
                        System.out.println("2 2");
                        else if(k%3==2)
                        System.out.println("3 3");
                    
                   
                
                }  
                
            
            }
            else
            { 
                System.out.println("4");
                for(int j=0; j<N; j++)
            {
                for(int k=0; k<M; k++)
                {
                    
                    if(j%4==0)
                    {
                        if(k%4==0||k%4==1)
                        System.out.print("1");
                        else if(k%4==2||k%4==3)
                        System.out.print("2");
                    
                    }
                    else if(j%4==1)
                    {
                        if(k%4==0||k%4==1)
                        System.out.print("3");
                        else if(k%4==2||k%4==3)
                        System.out.print("4");
                    
                    }
                    else if(j%4==2)
                    {
                        if(k%4==0||k%4==1)
                        System.out.print("2");
                        else if(k%4==2||k%4==3)
                        System.out.print("1");
                    
                    }
                    else if(j%4==3)
                    {
                        if(k%4==0||k%4==1)
                        System.out.print("4");
                        else if(k%4==2||k%4==3)
                        System.out.print("3");
                    
                    }
                    if(k!=M-1)
                    System.out.print(" ");
                
                }
                System.out.println("");

            }
            
            }
            
            
            


              


            

        }
            
       
    }
}


