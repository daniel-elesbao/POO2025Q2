import java.util.Scanner;
public class Eq2Plus
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        double A = scan.nextDouble();
        double B = scan.nextDouble();
        double C = scan.nextDouble();
        double delta = B * B - 4 * A * C;
        if (A == 0 || delta < 0)
        {
            System.out.println("nao ha raiz real");
        } 
        else if (delta == 0)
        {
            double r = -B / (2 * A);
            System.out.printf("%.4f\n", r);
        }
        else
        {
            double r1 = (-B + Math.sqrt(delta)) / (2 * A);
            double r2 = (-B - Math.sqrt(delta)) / (2 * A);
            System.out.printf("%.4f", r1);
            System.out.print(" ");
            System.out.printf("%.4f\n", r2);
        }
        scan.close();
    }
}