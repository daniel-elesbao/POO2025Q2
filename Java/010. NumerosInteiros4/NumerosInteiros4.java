import java.util.Scanner;

public class NumerosInteiros4
{
    public static void main(String[] args)
    {
        long A, B, C;
        Scanner scan = new Scanner(System.in);
        A = scan.nextLong();
        B = scan.nextLong();
        C = scan.nextLong();
        System.out.println(C + " " + B + " " + A);
        scan.close();       
    }
}
