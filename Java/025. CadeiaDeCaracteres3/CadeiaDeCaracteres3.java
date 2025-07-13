import java.util.Scanner;

public class CadeiaDeCaracteres3
{
    public static void main(String[] args)
    {
        String A, B, C;
        Scanner scan = new Scanner(System.in);
        A = scan.next();
        B = scan.next();
        C = scan.next();
        System.out.println(A + " " + B + " " + C);
        scan.close();
    }
}