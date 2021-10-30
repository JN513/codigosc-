#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, f_max_dist = 0, ig = 0;

vector <int> grafo[50005];
int visitado[50005], dist[50005];

void max_deep(int x) {

    int deep = 0;

    queue <int> q;

    q.push(x);

    visitado[x] = x;
    dist[x] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int j = 0; j < grafo[u].size(); j++){
            int v = grafo[u][j];

            if(visitado[v] != visitado[u]){
                visitado[v] = visitado[u];
                dist[v] = dist[u] + 1;

                if(dist[v] > f_max_dist){
                    f_max_dist = dist[v];
                    ig = 1;
                } else if(dist[v] == f_max_dist){
                    ig++;
                }

                q.push(v);
            }
        }
    }
}

int main(void){
    scanf("%d", &n);

    for(int i = 0; i < n-1; i++){
        int a, b;

        scanf("%d%d", &a, &b);

        grafo[a].push_back(b);
        grafo[b].push_back(a);

    }

    for(int i = 1; i <= n; i++){
        max_deep(i);
    }

    printf("%d\n", f_max_dist+1);

    double rig = (double)ig / 2.0;

    printf("%.0f\n", ceil(rig));

    return 0;
}