#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define NMAX 100005
#define MAXN 10005
#define INFINITO 999999999

using namespace std;

int dist1[MAXN], dist2[MAXN];
int c, s, a, b;

vector <int> grafo1[NMAX];
vector <int> grafo2[NMAX];

void Dijkstra(int S){
	
	for(int i = 1;i <= n;i++) distancia[i] = INFINITO; // definimos todas as distâncias como infinito, exceto a de S.
	distancia[S] = 0; // Assim, garantimos que o primeiro vértice selecionado será o próprio S.
	
	priority_queue< pii, vector<pii>, greater<pii> > fila; // Criamos uma fila de prioridade onde o menor fica no topo.
	fila.push( pii(distancia[S], S) );// Como se pode ver, colocamos o primeiro elemento como seja a distância do
	// vértice a S e o segundo como sendo o próprio vértice
	
	while(true){ // rodar "infinitamente"
		
		int davez = -1;
		int menor = INFINITO;
		
		// selecionamos o vértice mais próximo
		while(!fila.empty()){
			
			int atual = fila.top().second;
			fila.pop();
			
			if(!processado[atual]){ // podemos usar esse vértice porque ele ainda não foi processado
				davez = atual;
				break;
			}
			
			// se não, continuamos procurando
		}
		
		if(davez == -1) break; // se não achou ninguém, é o fim do algoritmo
		
		processado[davez] = true; // marcamos para não voltar para este vértice
		
		// agora, tentamos atualizar as distâncias
		for(int i = 0;i < (int)vizinhos[davez].size();i++){
			
			int dist  = vizinhos[davez][i].first;
			int atual = vizinhos[davez][i].second;
			
			// A nova possível distância é distancia[davez] + dist.
			// Comparamos isso com distancia[atual]
			
			if( distancia[atual] > distancia[davez] + dist ){  // vemos que vale a pena usar o vértice davez
				distancia[atual] = distancia[davez] + dist; // atualizamos a distância
				fila.push( pii(distancia[atual], atual) );  // inserimos na fila de prioridade
			}
		}
	}
	
}

int main(void){
    cin >> c >> s >> a >> b;

    return 0;
}