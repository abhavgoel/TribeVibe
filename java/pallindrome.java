import java.util.Scanner;
public class pallindrome {
    public static void main(String rgs[])
    {
            Scanner sc=new Scanner(System.in);
            int a;int n;int s=0;
            System.out.println("enter a number");
            a=sc.nextInt();
            n=a;
            while(n!=0)
            {
                int b=n%10;
                s=(s*10)+b;
                n=n/10;
}
if(s==a)
{
System.out.println("pallindrome number");
}
else
{
System.out.println("not a pallindrome");
}
}
}