import java.util.*;
public class Mirrorred_Array//Declaring Class
{
    public static void main(String args[])//Main method
    {
        Scanner ob=new Scanner(System.in);
        int i,j;//variables for loop
        int A[][]=new int[3][3];// Array of 3*3
        
        System.out.println("Enter elements in matrix A:");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                A[i][j]=ob.nextInt();//Getting inputs from user
            }
            System.out.println(" ");
        }
        
        for(i=0;i<3;i++)//Reverse loop for Mirror
        {
            for(j=3-1;j>=0;j--)
            {
                System.out.print(A[i][j]+" ");//printing reversed array
            }
            System.out.println(" ");
        }
    }//main closed
}//class closed
