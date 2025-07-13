import java.util.Scanner;
public class NumerosAB
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        for (int i = A; i < B; i++)
        {
            System.out.print(i + " ");
        }
        System.out.println(B);
        scan.close();
    }
}