import java.util.Scanner;

public class maiormenorque5 {
    public static void main(String[] args) {
        int num;
        Scanner entrada = new Scanner(System.in);
        num = entrada.nextInt();
        if (num > 5) {
            System.out.println("Numero maior de 5!");
        } else {
            System.out.println("Numero menor de 5!");
        }

        entrada.close();
    }
}