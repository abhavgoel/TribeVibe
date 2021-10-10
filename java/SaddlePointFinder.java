import java.io.*;
class SaddlePointFinder
{
    public static void main(String args[])throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter size of array  = ");
        int n = Integer.parseInt(br.readLine());
        int a[][] = new int[n][n];
        System.out.println("Enter array elements:");
        for(int i = 0;i < n; i++){
            for(int j = 0;j < n; j++){
                a[i][j]=Integer.parseInt(br.readLine());
            }
        }
        System.out.println("Original Matrix:");
        for(int i = 0;i < n; i++){
            for(int j = 0;j < n; j++){
                System.out.print(a[i][j] + "\t");
            }
            System.out.println();
        }
        boolean point=false;
        int min = a[0][0];
        int max = a[0][0];
        int sp = a[0][0];
        int row1 = 0;
        int row2 = 0;
        int col1 = 0;
        int col2 = 0;
        for(int i = 0; i < n; i++){
            min = a[i][0];
            row1 = i;
            col1 = 0;
            for(int j = 0;j < n; j++){
                if(a[i][j] < min){
                    min = a[i][j];
                    row1 = i;
                    col1 = j;
                }
            }   
            max = a[0][col1];
            for(int k = 0;k < n; k++){
                if(a[k][col1] > max){
                    max = a[k][col1];
                    row2 = k;
                    col2 = col1;
                }
            }
            if(row1 == row2 && col1 == col2){
                point = true;
                sp = a[row1][col1];
                break;
            } 
        }
        if(point)
            System.out.println("Saddle point = " + sp);
        else
            System.out.println("No saddle point");
    }
}