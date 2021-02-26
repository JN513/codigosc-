import java.util.Scanner;

public class decicao2 {
    public static void main(String[] argc){
        Scanner entrada = new Scanner(System.in);
        
        System.out.println("Digite um numero: ");

        int n = entrada.nextInt();

        System.out.printf("O numero digitado foi: %d\n",n);

        if(n % 2 == 0){
            System.out.println("O numero digitado e par.");
        } else{
            System.out.println("O numero digitado e impar.");
        }

        entrada.close();
    }
}
