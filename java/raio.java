import java.util.Scanner;

public class raio {
    public static void main(String[] argc) {
        Scanner entrada = new Scanner(System.in);

        Double r = entrada.nextDouble();

        Double area = (r*r)*3.1415;
        Double perimetro = 2*r*3.1415;

        System.out.printf("Área: %.2f \nPerímetro: %.2f\n", area, perimetro);

        entrada.close();
    }
}
