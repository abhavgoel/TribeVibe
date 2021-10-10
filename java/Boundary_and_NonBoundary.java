import java.util.*;//util for scanner
public class Boundary_and_NonBoundary//class 
{
    public static void main(String args[])//main method
    {
        Scanner ob=new Scanner(System.in);//scanner object
        int i,j;
        int A[][]=new int[3][3];

        System.out.println("Enter elements in matrix A:");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                A[i][j]=ob.nextInt();
            }
            System.out.println(" ");
        }//boundary elements
        System.out.println("Boundary Elements are:");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if (i == 0) 
                    System.out.print(A[i][j] + " "); 
                else if (i == 2) 
                    System.out.print(A[i][j] + " "); 
                else if (j == 0) 
                    System.out.print(A[i][j] + " "); 
                else if (j ==2) 
                    System.out.print(A[i][j] + " "); 
                else
                    System.out.print("  "); 
            } 
            System.out.println(""); 
        } //non boundary elements
        System.out.println("Non Boundary Elements are:");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if (i==1&&j==1)//condition to check
                    System.out.print(A[i][j] + " ");  
            }
            System.out.println(" ");
        }
    }//main closed
}//class closed
