import java.util.Scanner;
public class RaioPositivo
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        double raio = 0.0;
        while (raio <= 0.0)
        {
            System.out.print("Informe o raio: ");
            raio = scan.nextDouble();
        }        
        System.out.printf("A area eh: %.2f\n", 3.1415 * raio * raio);
        scan.close();
    }
}