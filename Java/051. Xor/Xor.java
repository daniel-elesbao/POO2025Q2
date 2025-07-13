import java.util.Scanner;
public class Xor
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        String A = scan.next();
        String B = scan.next();
        boolean a = A.equals("true");
        boolean b = B.equals("true");
        if (a ^ b) 
        {
            System.out.println("true");
        }
        else 
        {
            System.out.println("false");
        }
        scan.close();   
    }
}