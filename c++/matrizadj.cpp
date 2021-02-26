#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m, adj[1000][1000];

int main(void){
    cin >> n >> m;

    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;

        adj[x][y] = 1;
        adj[y][x] = 1;
    }

    
    


    return 0;
}