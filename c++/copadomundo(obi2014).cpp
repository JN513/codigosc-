#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, f, r, R;
int cid[105];
vector <pair <int,int>> grafo[NMAX];

int main(void){
    cin >> n >> f >> r;

    for(int i = 0; i < f+r; i++){
        int a, b, c;

        cin >> a >> b >> c;

        grafo[a].push_back({c,b});
        grafo[b].push_back({c,a});
    }

    

    return 0;
}