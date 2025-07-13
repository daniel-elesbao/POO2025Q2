import java.util.Scanner;

public class Espelho 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        String aStr = String.valueOf(A);
        String bStr = String.valueOf(B);
        String bReverso = new StringBuilder(bStr).reverse().toString();

        if (aStr.equals(bReverso)) {
            System.out.println("espelho");
        } else {
            System.out.println("nao espelho");
        }
        scan.close();
    }
}