import java.util.Scanner;
public class Aprovado
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        double media = scan.nextDouble();
        int faltas = scan.nextInt();
        if (media >= 6.0 && faltas <= 30)
        {
            System.out.println("Aprovado!");
        }
        scan.close();   
    }
}