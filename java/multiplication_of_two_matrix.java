import java.util.*;
public class multiplication_of_two_matrix//declaring class
{
    public static void main(String args[]) //Main method
    {
        Scanner ob=new Scanner(System.in); //initializing scanner
        int i,j;//variables for loop
        int A[][]=new int[3][3]; //3*3 Matrix
        int B[][]=new int[3][3];
        System.out.println("Enter elements in matrix A:");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                A[i][j]=ob.nextInt(); //Getting input from user
            }
            System.out.println(" ");
        }
        System.out.println("Enter elements in matrix B:");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                B[i][j]=ob.nextInt();//Getting input from user for matrix b
            }
        
        System.out.println(" ");
    }
        int k;
        int c[][]=new int[3][3];//matrix for multiplication
        
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                c[i][j]=0;
               for(k=0;k<3;k++)
               {
                   c[i][j]+=A[i][k]*B[k][j]; //multiplication
                }
                   System.out.print(c[i][j]+" ");
            
        }
        System.out.println(" ");
    }
}//ending main
}//ending class

        