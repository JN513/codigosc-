import java.util.Scanner;

public class nomeecidade {
    public static void main(String[] argc) {
        Scanner entrada = new Scanner(System.in);
        
        String nome = entrada.nextLine();
        String cidade = entrada.nextLine();

        System.out.printf("Meu nome é %s, estudo no IF e moro em %s\n", nome,cidade);

        entrada.close();
    }
}
