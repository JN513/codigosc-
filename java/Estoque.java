import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.time.LocalDateTime;
import javax.swing.*;

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

public class Estoque extends javax.swing.JFrame {

    public Estoque() {
        initComponents();
    }

    private void initComponents(){
        label1 = new JLabel("Olá");

        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);

        botao1.setText("OK");
        botao1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                botao1ActionPerformed(evt);
            }
        });

        add(label1);
        add(botao1);
    }

    private void botao1ActionPerformed(evt){
        if(label1.getText() == "Olá"){
            label1.setText("Blz");
        }else{
            label1.setText("Olá");
        }
    }

    public static void main(String[] args){
        ArrayList<Produto> produtos = new ArrayList<Produto>();

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

        try {
            for (UIManager.LookAndFeelInfo info : UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(JFrameValeriano.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(JFrameValeriano.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(JFrameValeriano.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(JFrameValeriano.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Estoque().setVisible(true);
            }
        });
    }

    private JLabel label1;
    private JButton botao1;
}
