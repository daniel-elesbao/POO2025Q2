import java.util.Scanner;

public class Datas2
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int D = scan.nextInt();
        int M = scan.nextInt();
        int A = scan.nextInt();
        boolean valida = true;
        if (M < 1 || M > 12 || A < 1583)
        {
            valida = false;
        }
        else 
        {
            int[] diasMes = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            if ((A % 4 == 0 && A % 100 != 0) || (A % 400 == 0))
            {
                diasMes[1] = 29;
            }
            if (D < 1 || D > diasMes[M - 1])
            {
                valida = false;
            }
        }

        if (valida)
        {
            System.out.println("DATA VALIDA");
        }
        else
        {
            System.out.println("DATA INVALIDA");
        }
        scan.close();
    }
}