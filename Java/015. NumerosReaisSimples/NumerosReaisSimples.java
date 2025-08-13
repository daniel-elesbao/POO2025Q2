import java.util.Scanner;

public class NumerosReaisSimples
{
    public static void main(String[] args)
    {
        float A, B, C;
        Scanner scan = new Scanner(System.in);
        A = scan.nextFloat();
        B = scan.nextFloat();
        C = scan.nextFloat();
        System.out.printf("%.2f\n", A);
        System.out.printf("%.2f\n", B);
        System.out.printf("%.2f\n", C);
        scan.close();       
    }
}
