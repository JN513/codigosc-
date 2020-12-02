#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

class Marca{
    private:

    public:
    Marca(){

    }
};

class Veiculo{
    private:

    public:
    Veiculo(){

    }
};

class Carro{
    private:
        double preco;
        int qtd;
        string nome;

    public:
        Carro(double pre, int esto, string name){
            preco = pre;
            qtd = esto;
            nome = name;
        }

        bool em_estoque(){
            return qtd > 0;
        }

        void diminui_estoque(int x){
            qtd -= x;
        }

        void add_estoque(int x){
            qtd += x;
        }

};


int main(void){
    Carro meucarro(10.0, 0, "opala");

    cout << meucarro.em_estoque() << nl;

    return 0;
}