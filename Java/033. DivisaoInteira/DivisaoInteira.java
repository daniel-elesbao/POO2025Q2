import java.util.Scanner;
public class DivisaoInteira
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        System.out.println(A / B);
        scan.close();       
    }
}