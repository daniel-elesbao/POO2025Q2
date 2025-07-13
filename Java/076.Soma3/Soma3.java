import java.util.Scanner;
public class Soma3
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        long soma = 0;
        while (scan.hasNextInt())
        {
                soma += scan.nextInt();
        }
        System.out.println(soma);
        scan.close();
    }
}