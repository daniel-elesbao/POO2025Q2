import java.util.Scanner;
public class NumerosParesAB
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        for (int i = A; i < B - 1; i++)
        {
            if (i % 2 == 0)
            {
                System.out.print(i + " ");
            }
        }
        if (B % 2 == 0)
        {
            System.out.println(B);
        }
        else
        {
            System.out.println(B - 1);
        }
        scan.close();
    }
}