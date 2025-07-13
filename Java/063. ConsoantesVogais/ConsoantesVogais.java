import java.util.Scanner;
public class ConsoantesVogais
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        char X = scan.next().charAt(0);
        if (X == 'a' || X == 'e' || X == 'i' || X == 'o' || X == 'u' || 
            X == 'A' || X == 'E' || X == 'I' || X == 'O' || X == 'U')
        {
            System.out.println("vogal");
        }
        else
        {
            System.out.println("consoante");
        }
        scan.close();   
    }
}