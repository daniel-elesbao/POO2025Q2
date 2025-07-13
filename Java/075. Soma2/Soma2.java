import java.util.Scanner;
public class Soma2
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int N  = scan.nextInt();
        long soma = 0;
        for (int i = 1; i <= N; i++)
        {
            int numero = scan.nextInt();
            soma += numero;
        }
        System.out.println(soma);
        scan.close();
    }
}