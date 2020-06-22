#include <bits/stdc++.h>

using namespace std;

int n, m, v[1005];

vector<int> ca[1005];

void dfs(int x) {
    v[x] = 1;
    for (int i = 0; i < ca[x].size(); i++) {
        int a = ca[x][i];
        if (v[a] == 0) {
            dfs(a);
        }
    }
}

int main(){
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        ca[a].push_back(b);
    }

    dfs(0);

    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            cout<<"Rambo esta perdido"<<endl;
            return 0;
        }
    }

    cout<<"Rambo esta salvo"<<endl;

    return 0;
}
