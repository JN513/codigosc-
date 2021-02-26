import java.util.Scanner;

public class decicao3 {
    public static void main(String[] argc){
        Scanner entrada = new Scanner(System.in);

        System.out.println("Digite um numero: ");

        int n = entrada.nextInt();

        System.out.printf("O numero digitado foi: %d\n",n);

        if(n % 7 == 0){
            System.out.println("O numero e divisivel por 7.");
        } else if(n % 5 == 0){
            System.out.println("O numero e divisivel por 5.");
        } else if(n % 3 == 0){
            System.out.println("O numero e divisivel por 3.");
        } else if(n % 2 == 0){
            System.out.println("O numero e divisivel por 2.");
        } else{
            System.out.println("O numero não e divisivel por nem um de nossos divisores.");
        }

        entrada.close();
    }
}
