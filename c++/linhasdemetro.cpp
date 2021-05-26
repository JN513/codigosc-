#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define NMAX 100005

using namespace std;

vector <int> grafo[NMAX];
int v[NMAX]
int n, q;

int main(void){
    cin >> n >> q;

    for(int i = 1, a, b; i < n; i++){
        cin >> a >> b;

        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    for(int i = 0, a, b, c, d; i < q; i++){
        cin >> a >> b >> c >> d;

        
    }

    return 0;
}