import java.util.Scanner;

public class mutidimencao {
    public static void main(String[] argv){
        Scanner scan = new Scanner(System.in);

        int m[][][] = new int[2][2][2];

        for(int k = 0; k < 2; k++){
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    m[k][i][j] = scan.nextInt();
                }
            }
        }

        for(int k = 0; k < 2; k++){
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    
                    System.out.println(m[k][i][j]);
                }
            }
        }

        scan.close();
    }
}
