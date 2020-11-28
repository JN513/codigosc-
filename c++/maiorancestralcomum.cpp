#include <bits/stdc++.h>

#define nl endl
#define NMAX 1002

using namespace std;

int n, m, s1[NMAX], s2[NMAX], dp[NMAX][NMAX];

int lcs(int a, int b){ // declaro a função da DP, de nome lcs
	// se já calculamos esse estado da dp antes
	if(dp[a][b]>=0) return dp[a][b]; // retornamos o valor salvo para ele
	
	// se uma das sequências for vazia, retornamos zero
	if(a==0 or b==0) return dp[a][b]=0;
	
	// se s1[a] for igual a s2[b], os retiramos das sequências
	if(s1[a]==s2[b]) return 1+lcs(a-1, b-1); // e adicionamos ele à lcs das subsequâncias restantes
	
	// se forem diferentes, retorno o máximo entre retirar s1[a] ou s1[b]
	return dp[a][b]=max(lcs(a-1, b), lcs(a, b-1));
}

int main(void){
    cin >> n >> m;

    memset(dp,-1,sizeof dp);

    for(int i = 0; i < n; i++) cin >> s1[i];
    for(int i = 0; i < m; i++) cin >> s2[i];

    int r = lcs(n-1, m-1);

    cout << n-r << " "<<m-r << nl;

    return 0;
}