import java.util.Scanner;
public class Diferenca
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        long A = scan.nextLong();
        long B = scan.nextLong();
        if (A != B) 
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