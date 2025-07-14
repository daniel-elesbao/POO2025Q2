import java.util.Scanner;
public class NotasEMedia
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        double[] N = new double[10];
        double soma = 0.0;
        for (int i = 0; i < 10; i++)
        {
            System.out.printf("Informe a " + (i + 1) + "a. nota:\n");
            N[i] = scan.nextDouble();
            soma += N[i];
        }
        double media = soma / 10.0;
        System.out.printf("Sua Media Final dos Trabalhos (NFT) foi %.2f\n", media);
        scan.close();
    }
}