#include <bits/stdc++.h>

using namespace std;

int n, m;

int marcadas[100002];
vector<int> block[100002];
vector<int> r;

int main(void){
    cin >> n >> m;

    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b;
        block[a].push_back(b);
        block[b].push_back(a);
    }

    for(int i = n; i >= 1; i--){
        bool pode = true;

        for(int j = 0; j < block[i].size(); j++)if(marcadas[block[i][j]]) pode =  false;

        if(pode) marcadas[i] = 1; 
    }

    for(int i = 1; i <= n; i++) if(marcadas[i]) r.push_back(i);

    cout << r.size() << endl;

    for(int i = 0; i < r.size(); i++) cout << r[i] << " ";

    cout << endl;

    return 0;
}