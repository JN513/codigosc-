#include <bits/stdc++.h>

using namespace std;

int n, y;

bool r = true;

vector <int> m[10005], rm[10005];
int v[10005];

void dfs(int x){
	v[x] = 1;
	if(m[x].size() > 1) r = false;
	for(int i = 0; i < m[x].size() ; i++){
		int u = m[x][i];

		if(v[u] == 0) dfs(u);
	}
}

void rdfs(int x){
	v[x] = 1;
	if(m[x].size() > 1) r = false;
	for(int i = 0; i < rm[x].size() ; i++){
		int u = rm[x][i];

		if(v[u] == 0) rdfs(u);
	}
}

int main(){
	cin >> n;

	for (int i = 0, a, b; i < n; ++i){
		cin >> a >> b;
		m[a].push_back(b);
		rm[b].push_back(a);
	}

	dfs(1);

	for(int i = 1; i <= n; i++) {
		if (v[i] == 0){
			r = false;
			break;
		}
		v[i] = 0;
	}
	rdfs(1);

	for(int i = 1; i <= n; i++) if (v[i] == 0){
		r = false;
		break;
	}

	if(r == false) cout << "N\n";
	else cout << "S\n";

	return 0;
}
