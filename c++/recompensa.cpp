#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

int n, q, dt[maxn], maxx[maxn][2], suf[maxn], ct;
bool cam[maxn];
vector<int> graph[maxn], cnh;

bool dfs(const int &u, const int &f){
	if(u == ct) return cam[u] = true;
	
	for(int v: graph[u]){
		if(v == f) continue;
		
		if(dfs(v, u)){
			cnh.push_back(v);
			return cam[v] = cam[u] = true;
		}
	}

	return false;
}

void caminho(const int &u, const int &f, const bool &flag){	
	maxx[u][flag] = dt[u];

	for(int v: graph[u]){
		if(v == f || v == ct) continue;
		
		dt[v] = dt[u] + 1;

		caminho(v, u, flag);

		if(!cam[v]) maxx[u][flag] = max(maxx[u][flag], maxx[v][flag]);
	}
}

int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;

	for(int i = 1 ; i < n ; ++i) {
		int u, v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	cin >> q;

	for(int i = 0 ; i < q ; ++i){
		int a, b;
		cin >> a >> b;
		
		cnh.clear();
		memset(dt, 0, sizeof dt);
		//memset(suf, 0, sizeof suf);
		memset(maxx, 0, sizeof maxx);
		memset(cam, false, sizeof cam);

		ct = b;

		dfs(a, -1);
		cnh.push_back(a);

		reverse(cnh.begin(), cnh.end());

		int t = cnh.size();

		dt[a] = 1; 
		caminho(a, -1, 0);

		memset(dt, 0, sizeof dt);
			
		ct = a;
		dt[b] = 1;
		caminho(b, -1, 1);

		int ans = 0, m = 0;

		for(int j = t ; j >= 1 ; --j){
			ans = max(ans, maxx[cnh[j - 1]][0] + m);
			m = max(m, maxx[cnh[j - 1]][1]);
		}
	
		cout << ans - 1 << "\n";
	}

	return 0;
}