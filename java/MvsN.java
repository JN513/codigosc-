import java.util.Scanner;

public class MvsN {
    public static void main(String[] argv){
        Scanner scan = new Scanner(System.in);

        int m[][] = new int[2][4];

        for(int i = 0; i < 2; i++){
            for(int  j = 0; j < 4; j++){
                m[i][j] = scan.nextInt();
            }
        }

        int n = scan.nextInt();

        for(int i = 0; i < 2; i++){
            for(int  j = 0; j < 4; j++){
                System.out.printf("%d ",m[i][j]*n);
            }
            System.out.println("");
        }

        scan.close();
    }
}
