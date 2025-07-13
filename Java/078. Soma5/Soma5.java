import java.util.Scanner;
public class Soma5
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int numero = scan.nextInt();
        long soma = numero;
        while (numero != 0)
        {
                numero = scan.nextInt();
                soma += numero;               
        }
        System.out.println(soma);
        scan.close();
    }
}