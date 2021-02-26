import java.util.Scanner;

public class input {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.printf("Digite seu nome:");
        String name = entrada.nextLine();

        System.out.printf("Digite sua idade:");
        int idade = entrada.nextInt();

        System.out.printf("Digite seu peso:");
        double peso = entrada.nextDouble();

        System.out.printf("%s %d %.2f\n", name,idade,peso);

        entrada.close();
    }
}