import java.util.Scanner;

public class mediaaritmetica {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        Double num1 = entrada.nextDouble();
        Double num2 = entrada.nextDouble();

        Double media = (num1 + num2)/2.0;

        System.out.printf("A media do aluno foi: %.2f\nEle esta: ", media);

        if(media >= 4){
            System.out.println("Aprovado");
        }else{
            System.out.println("Reprovado");
        }

        entrada.close();
    }
}
