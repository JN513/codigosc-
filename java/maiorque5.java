import java.util.Scanner;
public class maiorque5 {
    public static void main(String[] args) {
        int num;
        Scanner entrada = new Scanner(System.in);
        num = entrada.nextInt();
        if (num > 5) {
            System.out.println(num + " e maior que 5!");
        }

        entrada.close();
    }
}