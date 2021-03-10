import java.util.Scanner;

public class multiplos_de_n_entre_a_e_b {
    public static void main(String[] argv){
        Scanner scan = new Scanner(System.in);

        int v[] = new int[100];

        int total = 0;

        int a = scan.nextInt();

        int b = scan.nextInt();

        int c = scan.nextInt();

        if(b > c){
            int d = c;
            c = b;
            b = d;
        }

        for(int i = b; i <= c; i++){
            if(i%a == 0){
                v[total] = i;
                total++;
            }
        }

        if(total == 0){
            System.out.println("INEXISTENTE");
        }

        for(int  i = 0; i < total; i++){
            System.out.println(v[i]);
        }

        scan.close();
    }
}
