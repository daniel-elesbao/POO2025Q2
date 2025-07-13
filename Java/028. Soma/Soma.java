import java.util.Scanner;
public class Soma
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        long A = scan.nextLong();
        long B = scan.nextLong();
        System.out.println(A + B);
        scan.close();       
    }
}