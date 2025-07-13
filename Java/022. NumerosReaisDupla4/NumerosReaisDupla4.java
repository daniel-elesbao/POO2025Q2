import java.util.Scanner;

public class NumerosReaisDupla4
{
    public static void main(String[] args)
    {
        double A, B, C;
        Scanner scan = new Scanner(System.in);
        A = scan.nextDouble();
        B = scan.nextDouble();
        C = scan.nextDouble();
        System.out.printf("%.4f", C);
        System.out.print(" ");
        System.out.printf("%.4f", B);
        System.out.print(" ");
        System.out.printf("%.4f", A);
        System.out.println();
        scan.close();
    }
}