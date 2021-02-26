import java.util.Scanner;

public class mediaaritimeticacompeso {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        Double num1 = entrada.nextDouble();
        Double num2 = entrada.nextDouble();

        Double media = ((num1*2) + (num2*3))/5;

        System.out.printf("A media do aluno foi: %.2f\nEle esta: ", media);

        if(media >= 6){
            System.out.println("Aprovado");
        } else if(media >= 4){
            System.out.println("Exame");
        } else{
            System.out.println("Reprovado");
        }

        entrada.close();
    }
}
