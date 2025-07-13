import java.util.Scanner;
public class Eq2
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        double A = scan.nextDouble();
        double B = scan.nextDouble();
        double C = scan.nextDouble();
        double delta = B * B - 4 * A * C;
        double x1 = (-B + Math.sqrt(delta)) / (2 * A);
        double x2 = (-B - Math.sqrt(delta)) / (2 * A);
        System.out.printf("%.4f", x1);
        System.out.print(" ");
        System.out.printf("%.4f\n", x2);
        scan.close();       
    }
}