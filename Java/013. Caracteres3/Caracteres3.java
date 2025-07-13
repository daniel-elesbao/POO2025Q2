import java.util.Scanner;

public class Caracteres3
{
    public static void main(String[] args)
    {
        char A, B, C;
        Scanner scan = new Scanner(System.in);
        A = scan.next().charAt(0);
        B = scan.next().charAt(0); 
        C = scan.next().charAt(0);
        System.out.println(A + " " + B + " " + C);
        scan.close();       
    }
}
