import java.util.Scanner;

public class Universidade
{
    public static void main(String[] args)
    {
        int tempo;
        String universidade;
        Scanner scan = new Scanner(System.in);
        universidade = scan.next();
        tempo = scan.nextInt();
        System.out.println("Voce estuda na " + universidade + " ha " + tempo + " anos.");
        scan.close();       
    }
}
