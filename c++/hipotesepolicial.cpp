#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define NMAX 100005

using namespace std;

int n, m;
string padrao;

char es[NMAX];
vector <int> grafo[NMAX];

int bfs(int x, int y){
    int v[NMAX] = {};

    
}

int main(void){
    cin >> n >> m;

    cin >> padrao;

    string s;

    cin >> s;

    for(int i = 0; i < s.size(); i++) es[i] = s[i];

    for(int i = 0, a, b; i < n-1; i++){
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    for(int i = 0; i < m; i++){
        int a;
        cin >> a;

        if(a == 1){
            int b, c;
            cin >> b >> c;

            r = bfs(b, c);
            cout << r << nl;
        }
        if(a == 2){
            int b; char c;
            cin >> b >> c;
            es[b-1] = c;
        }

    } 

    return 0;
}