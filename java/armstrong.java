import java.util.Scanner;
public class armstrong {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a;int n;double c;double b;double s;
        System.out.println("enter a number");
        a=sc.nextInt();
        n=a;
        c=0;
        s=0;
        while(n!=0)
        {
           c=c+1;
           n=n/10;
        }
        n=a;
        while(n!=0)
        {
            b=n%10;
            s=s+Math.pow(b,c);
            n=n/10;


        }
        if(a==s)
        {
            System.out.println("Armstrong number");
        }
        else{
            System.out.println("not a armstron number");
        }

    }
}
