import java.util.Scanner;

public class NumerosParesImparesAB
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        boolean primeiro = true;
        for (int i = A; i <= B; i++) {
            if (i % 2 == 0)
            {
                if (!primeiro)
                {
                    System.out.print(" ");
                }
                System.out.print(i);
                primeiro = false;
            }
        }
        System.out.println();

        primeiro = true;
        for (int i = A; i <= B; i++)
        {
            if (i % 2 != 0)
            {
                if (!primeiro)
                {
                    System.out.print(" ");
                }
                System.out.print(i);
                primeiro = false;
            }
        }
        System.out.println();
        sc.close();
    }
}