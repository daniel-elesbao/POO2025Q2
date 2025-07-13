import java.util.Scanner;
public class DiaSeguinte
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int D = scan.nextInt();
        int M = scan.nextInt();
        int A = scan.nextInt();        
        int[] diasMes = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ((A % 4 == 0 && A % 100 != 0) || (A % 400 == 0)) {
            diasMes[1] = 29; // Fevereiro tem 29 dias em anos bissextos
        }
        D++;
        if (D > diasMes[M - 1])
        {
            D = 1;
            M++;
            if (M > 12)
            {
                M = 1;
                A++;
            }
        }
        System.out.printf("%02d", D);
        System.out.print(" ");
        System.out.printf("%02d", M);
        System.out.print(" ");
        System.out.printf("%04d\n", A);
        scan.close();
    }
}