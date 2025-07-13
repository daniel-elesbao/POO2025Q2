import java.util.Scanner;

public class NumerosReaisDupla
{
    public static void main(String[] args)
    {
        double A, B, C;
        Scanner scan = new Scanner(System.in);
        A = scan.nextDouble();
        B = scan.nextDouble();
        C = scan.nextDouble();
        System.out.printf("%.4f\n", A);
        System.out.printf("%.4f\n", B);
        System.out.printf("%.4f\n", C);        
        scan.close();
    }
}