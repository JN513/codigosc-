#include <algorithm>

using namespace std;

// defino os maiores valores de n e s como 1010
#define MAXN 1010
#define MAXS 1010

// declaro as variáveis que a função utiliza
int n, valor[MAXN], peso[MAXN], tab[MAXN][MAXS];

int knapsack(int obj, int aguenta){
	
	// se já calculamos esse estado da dp, retornamos o resultado salvo
	if(tab[obj][aguenta]>=0) return tab[obj][aguenta];
	
	// se não houver mais objetos ou espaço na mochila, retorno 0, pois não posso mais botar nada
	if(obj==n or !aguenta) return tab[obj][aguenta]=0;
	
	// não colocar avança para o estado em que tentmos o próximo, com o mesmo espaço disponível
	int nao_coloca=knapsack(obj+1, aguenta);
	
	// se for possível colocar o objeto
	if(peso[obj]<=aguenta){
		
		// o melhor atingível é o valor dele mais o melhor entre colocar ou não os próximos
		// que é o resultado do estado da dp em que olhamos o próximo objeto
		// mas agora a mpchila aguenta o que aguentava antes menos o peso que coloquei nela
		int coloca=valor[obj]+knapsack(obj+1, aguenta-peso[obj]);
		
		// e a função deve retornar o melhor entre colocar ou não colocar
		return tab[obj][aguenta]=max(coloca, nao_coloca);
	}
	
	// se a função não retornou ainda, então ela não entrou no if
	// logo não era possível colocar o objeto 
	return tab[obj][aguenta]=nao_coloca; // então retorno o valor de não colocá-lo
}

int main(void){

    return 0;
}