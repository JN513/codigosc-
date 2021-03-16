import java.util.Scanner;

public class Matriz{
    public static void main(String[] argv){
        Scanner scan = new Scanner(System.in);

        Double m[][] = new Double[3][4];

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 4; j++){
                m[i][j] = scan.nextDouble();
            }
        }

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 4; j++){
                System.out.printf("%.2 ",m[i][j]);
            }
            System.out.println("");
        }

        scan.close();
    }
}