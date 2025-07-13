import java.util.Scanner;
public class Not
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        String A = scan.next();
        boolean a = A.equals("true");
        if (!a) 
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