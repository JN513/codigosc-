import java.util.Scanner;

public class alugueldecarro {
    public static void main(String[] argc){
        Scanner entrada = new Scanner(System.in);

        Double dias = entrada.nextDouble();
        Double km = entrada.nextDouble();

        Double r = (dias*30.0)+(km*0.01);

        r = r-(r*0.1);

        System.out.printf("%.2f\n", r);

        entrada.close();
    }
}
