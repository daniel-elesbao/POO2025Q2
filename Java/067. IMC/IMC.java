import java.util.Scanner;
public class IMC
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        double A = scan.nextDouble();
        double P = scan.nextDouble();
        double IMC = P / (A * A);
        if (IMC < 16)
        {
            System.out.println("Magreza grave");
        }
        else if (IMC < 17)
        { 
            System.out.println("Magreza moderada");
        } 
        else if (IMC < 18.5)
        {
            System.out.println("Magreza leve");
        } 
        else if (IMC < 25)
        {
            System.out.println("Saudavel");
        } 
        else if (IMC < 30)
        {
            System.out.println("Sobrepeso");
        } 
        else if (IMC < 35)
        {
            System.out.println("Obesidade Grau I");
        } 
        else if (IMC < 40)
        {
            System.out.println("Obesidade Grau II (severa)");
        } 
        else
        {
            System.out.println("Obesidade Grau III (morbida)");
        } 
        scan.close();
    }
}