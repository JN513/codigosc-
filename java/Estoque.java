import java.util.Scanner;
import java.time.LocalDateTime;

class Produto {
    private LocalDateTime criado_em;
    private String name;
    private int preco_cent;
    private int id;
    private int qtd;

    public Produto(int new_id, String new_name, Double valor, int new_qtd){
        criado_em = LocalDateTime.now();
        preco_cent = (int)(valor*(100.0));
        name = new_name;
        qtd = new_qtd;
        id = new_id;
    }

    public int get_ID(){
        return id;
    }

    public String get_Name(){
        return name;
    }

    public Double get_Preco(){
        return ((double)preco_cent)/100.0;
    }

    public int get_Qtd(){
        return qtd;
    }

    public LocalDateTime get_CreateDate(){
        return criado_em;
    }

    public void set_Name(String new_name){
        this.name = new_name;
    }

    public void set_Preco(Double new_valor){
        this.preco_cent = (int)(new_valor*(100.0));
    }

    public void add_qtd(int add_qtd){
        this.qtd += add_qtd;
    }

    public boolean retirar_qtd(int r_qtd){
        if(qtd >= r_qtd){
            this.qtd -= r_qtd;
            return true;
        }else{
            return false;
        }
    }
}

public class Estoque {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        Produto produtinho = new Produto(0, "Xablau", 12.5, 10);

        System.out.println(produtinho.get_ID());
        System.out.println(produtinho.get_Name());
        System.out.println(produtinho.get_Qtd());
        System.out.println(produtinho.get_Preco());
        System.out.println(produtinho.get_CreateDate());
        System.out.println(produtinho.retirar_qtd(15));
        System.out.println(produtinho.retirar_qtd(9));
        System.out.println(produtinho.get_Qtd());

        /*
        while(true){
            System.out.printf("Escolha uma opção:\n1-Para inserir novos produtos\n2-Para imprimir os protudos\n3-Para procurar um produto\n4-Para sair.\n");

            String entra = scan.nextLine();

            if(entra.equalsIgnoreCase("1")){
                System.out.println("ola");
            }else if(entra.equalsIgnoreCase("2")){
                System.out.println("ola");
            }else if(entra.equalsIgnoreCase("3")){
                System.out.println("ola");
            }else{
                break;
            }
        }
*/
        scan.close();
    }
}
