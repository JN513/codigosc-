#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define NMAX 10e5+12

using namespace std;

int n, d, m, q;

vector <int> grafo[NMAX];
int v[NMAX]

int main(void){
    cin >> n >> d;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> n;

        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    return 0;
}