import java.util.Scanner;
public class DivisaoReal
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        double div = (double) A / B;
        System.out.printf("%.4f\n", div);
        scan.close();       
    }
}