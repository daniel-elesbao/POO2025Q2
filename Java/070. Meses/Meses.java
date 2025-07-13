import java.util.Scanner;
public class Meses
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int mes = scan.nextInt();
        String[] meses = {"JANEIRO", "FEVEREIRO", "MARCO", "ABRIL", "MAIO", 
                         "JUNHO", "JULHO", "AGOSTO", "SETEMBRO", 
                         "OUTUBRO", "NOVEMBRO", "DEZEMBRO"}; 
        if (mes < 1 || mes > 12) {
            System.out.println("MES INVALIDO");
        } else {
            System.out.println(meses[mes - 1]);
        }
        scan.close();
    }
}