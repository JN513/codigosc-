import java.util.Scanner;

public class salario {
    public static void main(String[] argv){
        Scanner entrada = new Scanner(System.in);

        Double salario = entrada.nextDouble();

        Double resposta = salario+(salario*0.25);

        System.out.printf("%.2f\n",resposta);

        entrada.close();
    }
}
