import java.util.Scanner;
public class DivisaoExata
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        long X = scan.nextLong();
        long Y = scan.nextLong();
        if (X % Y == 0)
        {
            System.out.println("a divisao de " + X + " por " + Y + " eh exata.");
        }
        scan.close();   
    }
}