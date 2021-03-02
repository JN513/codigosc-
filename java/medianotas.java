import java.util.Scanner;

public class medianotas {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        Double media = 0.0;

        for(int i = 0; i < 10; i++){
            Double nota = scan.nextDouble();

            media += nota;
        }

        media = media/10.0;

        System.out.printf("Média final: %.2f\n", media);

        scan.close();
    }
}
