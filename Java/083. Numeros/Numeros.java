import java.util.Scanner;
public class Numeros
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int numero = scan.nextInt();
        int somadiv = 0;
        while (numero >= 0)
        {
            for (int i = 1; i < numero; i++)
            {
                if (numero % i == 0)
                {
                    somadiv += i;
                }
            }
            if (somadiv > numero)
            {
                System.out.println("abundante");
            }
            else if (somadiv < numero)
            {
                System.out.println("deficiente");
            }
            else if (somadiv == numero)
            {
                System.out.println("perfeito");
            }
            numero = scan.nextInt();
            somadiv = 0;               
        }
        scan.close();
    }
}