import java.util.Scanner;
public class ArredondaCima
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        double A = scan.nextDouble();
        System.out.printf("%.4f\n", Math.ceil(A));
        scan.close();
    }
    
}