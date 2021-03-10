import java.util.Scanner;
import java.util.ArrayList;

public class Varraylist {
    public static void main(String[] argv){
        Scanner scan = new Scanner(System.in);

        ArrayList<Integer> v = new ArrayList<Integer>();

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
                v.add(i);
            }
        }

        if(v.size() == 0){
            System.out.println("INEXISTENTE");
        }

        for(int i : v){
            System.out.println(i);
        }

        scan.close();
    }
}
