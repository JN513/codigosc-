#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, k;
string r = "";
vector <int> a;
int arvore[400005];

int sinal(int x){
    if(x>0) return 1;
    else if(x<0) return -1;
    else return 0;
}

void build(int no, int i, int j){
    if(i == j){
        arvore[no] == a[i];
    } else{
        int meio = (i+j)/2;

        build(2*no, i, meio);
        build(2*no+1, meio+1, j);
        arvore[no] = arvore[no*2]*arvore[no*2+1];
    }
}

void update(int no, int i, int j, int posicao, int novo_valor){
    if(i == j){ // se tivermos i = j, temos i = posicao = j. Logo, estamos no nó mais baixo da ávore
	
		// fazemos então as alterações triviais
		arvore[no] = sinal(novo_valor);
	}
	
	else{
		
		int esquerda = 2*no;     // índice do filho da esquerda
		int direita  = 2*no + 1; // índice do filho da direita
		
		// chamamos a função recursiva no nó necessário
		int meio = (i + j)/2;
		
		// se (posicao <= meio), vamos para o nó da esquerda (segmento [i, meio])
		if(posicao <= meio) update(esquerda, i, meio, posicao, novo_valor);
		
		// se não, vamos para o nó da direita (segmento [meio+1, j])
		else update(direita, meio+1, j, posicao, novo_valor);
		
        arvore[no] = arvore[2*no] * arvore[2*no+1];
	}
}

int query(int no, int i, int j, int a, int b){
    if(b<i || a>j) return 1;
    if(a<=i && b>=j) return arvore[no];

    int meio = (i+j)/2;

    return query(2*no, i, meio, a, min(b, meio)) * query(2*no+1, meio+1, j, max(meio+1, a), b);
}

int main(void){
    while(cin >> n >> k and (n+k)){        
        for(int i = 0, y; i < n; i++){
            cin >> y;

            if(y > 0) y = 1;
            if(y < 0) y = -1;

            a.push_back(y);
        }

        build(1, 0, n-1);

        for(int i = 0; i < k; i++){
            char c;
            int w, b;

            cin >> c >> w >> b;

            if(c == 'C'){
                update(1, 0, n-1, w-1, b);
            }else {
                int res = query(1, 0, n-1, w-1, b-1);

                if(res > 0) r += "+";
                else if(res < 0) r+= "-";
                else r += "0";
            }
        }

        cout << r << nl;
        r.clear();
        a.clear();
    }

    return 0;
}