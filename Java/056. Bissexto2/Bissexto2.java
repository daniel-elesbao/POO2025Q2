import java.util.Scanner;
public class Bissexto2
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        int ano = scan.nextInt();
        if (ano % 400 == 0)
        {
            System.out.println("ANO BISSEXTO");
        }
        else if (ano % 100 == 0)
        {
            scan.close();
            return;
        }
        else if (ano % 4 == 0)
        {
            System.out.println("ANO BISSEXTO");
        }
        scan.close();   
    }
}