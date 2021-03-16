import java.util.Scanner;

public class ParNaMatriz {
    public static void main(String[] argv){
        Scanner scan = new Scanner(System.in);

        int m[][] = new int[3][3];

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                m[i][j] = scan.nextInt();
            }
        }

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(m[i][j] %2 == 0){
                    System.out.printf("%d\n",m[i][j]);
                }
            }
        }
        scan.close();
    }
}
