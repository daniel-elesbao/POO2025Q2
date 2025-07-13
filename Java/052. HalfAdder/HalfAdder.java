import java.util.Scanner;
public class HalfAdder
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        String P = scan.next();
        String Q = scan.next();
        boolean p = P.equals("true");
        boolean q = Q.equals("true");
        if ((p && !q) || (!p && q))
        {
            System.out.println("false true");
        }
        else if (p && q)
        {
            System.out.println("true false");
        }
        else
        {
            System.out.println("false false");
        }
        scan.close();   
    }
}