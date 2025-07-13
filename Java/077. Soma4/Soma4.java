import java.util.Scanner;
public class Soma4
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int M;
        long soma;
        for (int i = 1; i <= N; i++)
        {
            M = scan.nextInt();
            soma = 0;
            for (int j = 1; j <= M; j++)
            {
                int numero = scan.nextInt();
                soma += numero;
            }
            System.out.println(soma);
        }
        scan.close();
    }
}