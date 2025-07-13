import java.util.Scanner;

public class CadeiaDeCaracteres4
{
    public static void main(String[] args)
    {
        String A, B, C;
        Scanner scan = new Scanner(System.in);
        A = scan.next();
        B = scan.next();
        C = scan.next();
        System.out.println(C + " " + B + " " + A);
        scan.close();
    }
}