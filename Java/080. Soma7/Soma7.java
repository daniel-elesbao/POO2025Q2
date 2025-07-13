import java.util.Scanner;

public class Soma7 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        while (scan.hasNextLine()) {
            String linha = scan.nextLine();
            String[] numeros = linha.trim().split("\\s+");
            int soma = 0;
            for (String numStr : numeros) {
                int num = Integer.parseInt(numStr);
                if (num == 0) break;
                soma += num;
            }
            System.out.println(soma);
        }
        scan.close();
    }
}