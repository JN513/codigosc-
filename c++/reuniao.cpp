#include <bits/stdc++.h>

using namespace std;

int n, m, dist[110];

vector< pair<int, int> > adj[110];

void dijkstra(int fonte){
	memset(dist, -1, sizeof dist);

	priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > filap;

	filap.push({0, fonte});

	int vtx, dst;

	while (!filap.empty()){
		tie(dst, vtx) = filap.top();
		filap.pop();

		if (dist[vtx] == -1){
			dist[vtx] = dst;

			for (auto e : adj[vtx]){
				if (dist[e.first] == -1)
					filap.push({dst + e.second, e.first});
			}
		}
	}
}

int main(){
	cin>>n>>m;

	int a, b, c;
	for (int e = 0; e < m; e++){
		cin>>a>>b>>c;
		adj[a].push_back({b, c});
		adj[b].push_back({a, c});
	}

	int ans = 100000;

	for (int fonte = 0; fonte < n; fonte++){
		dijkstra(fonte);

		int aux = 0;
		for (int v = 0; v < n; v++)
			if (dist[v] > aux)
				aux = dist[v];

		if (aux < ans)
			ans = aux;		
	}

	cout<<ans<<endl;
}