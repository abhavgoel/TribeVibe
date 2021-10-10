import java.util.*;//util package for scanner
public class transpose_of_matrix//class method
{
    public static void main(String args[])//main method
    {
        Scanner ob=new Scanner(System.in);//scanner object
        int i,j;//loop variables
        int A[][]=new int[3][4];
        int B[][]=new int[3][4];
        System.out.println("Enter elements in matrix A:");//entering numbers in matrix
        for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            {
                A[i][j]=ob.nextInt();//entering object
            }
            System.out.println();
        }
        int C[][]=new int[3][4];//new matrix for transpose
        for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            {
                C[i][j]=A[j][i];//transposed matrix
                System.out.print(C[i][j]+"  ");                   
            }
            System.out.println(" ");
        }
    }//main method
}//class  method