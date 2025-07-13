import java.util.Scanner;
public class AprovadoReprovado
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
        else
        {
            System.out.println("Reprovado!");
        }
        scan.close();   
    }
}