import java.util.Scanner;

public class NumerosInteiros3
{
    public static void main(String[] args)
    {
        long A, B, C;
        Scanner scan = new Scanner(System.in);
        A = scan.nextLong();
        B = scan.nextLong();
        C = scan.nextLong();
        System.out.println(A + " " + B + " " + C);
        scan.close();       
    }
}
