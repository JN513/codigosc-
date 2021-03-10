import java.util.Scanner;

public class Vetorparinver {
    public static void main(String[] argc){
        Scanner scan = new Scanner(System.in);

        int v[] = new int[10];

        for(int i = 0; i < 10; i++){
            v[i] = scan.nextInt();
        }

        for(int i = 9; i >= 0; i--){
            if(v[i] % 2 == 0){
                System.out.printf("%d ",v[i]);
            }
        }

        System.out.println("");

        scan.close();
    }
}
