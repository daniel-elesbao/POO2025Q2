import java.util.Scanner;

public class SubtracaoRepeticao
{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        int soma = A;

        for (int i = 0; i < B; i++) {
            soma--;
        }
        System.out.println(soma);
        scan.close();
    }
}