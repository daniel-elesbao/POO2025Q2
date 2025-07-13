import java.util.Scanner;
public class Absoluto
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        long A = scan.nextLong();
        System.out.println(Math.abs(A));
        scan.close();       
    }
}