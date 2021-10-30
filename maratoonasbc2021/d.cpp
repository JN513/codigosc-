#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pq priority_queue
#define NMAX 100005

using namespace std;

int n, m;

vector <pii> grafo[NMAX];


int main(void){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        grafo[a].pb(mp(b, c));
        grafo[b].pb(mp(a, c));
    }

    return 0;
}