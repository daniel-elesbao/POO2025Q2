import java.util.Scanner;
public class Fatorial
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        long n = scan.nextInt();
        long fatorial = 1;
        for (long i = 1; i <= n; i++)
        {
            fatorial *= i;
        }
        System.out.println(fatorial);
        scan.close();
    }
}