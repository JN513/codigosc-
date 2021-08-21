import java.util.Scanner;

public class felizes{
    public static boolean eFeliz(int i){
        String s=i+"";
        int pri = 0;
        int sec = 0;
        
        char primeir=s.charAt(0);
        pri = Integer.parseInt(primeir+"");
        
        if (s.length() > 1){
            char segundo=s.charAt(1);
            sec = Integer.parseInt(segundo+"");
        }
        int atual = 0;
        int soma = 0;
        
        for (int j = 0; j < s.length(); j++){
            atual = s.charAt(j);
            soma += atual * atual;
        }
        
        return soma == 1;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int r = 0;

        for(int i = 0; i < n; i++){
            int a = in.nextInt();

            if(eFeliz(a)) r += 1;
        }

        System.out.println(r);

        in.close();
    }
    
}