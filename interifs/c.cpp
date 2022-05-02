#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

map <string, int> values;
string names[100005];
vector <int> grafo[100005];
int visited[100005];


void dfs(int s) {
    visited[s] = 1;

    vector <string> filhos;
    for(int i = 0; i < grafo[s].size(); i++) {
        int v = grafo[s][i];
        if (!visited[v]) {
            filhos.push_back(names[v]);
        }
    }

    sort(filhos.begin(), filhos.end());
    for (int i = 0; i < filhos.size(); i++) {
        cout << filhos[i] << endl;
        if(grafo[values[filhos[i]]].size() > 0) {
            dfs(values[filhos[i]]);
        }
    }

}

int main(void){
    string s, x;

    cin >> s;

    values[s] = 0;
    int k = 1;

    while(true){
        cin >> s >> x;

        if(s == "fim" and x == "entrada") break;

        if(values.find(s) == values.end()){
            values[s] = k;
            names[k] = s;
            k++;
        }

        grafo[values[x]].push_back(values[s]);
    }

    cin >> s;

    cout << s << nl;

    dfs(values[s]);

    return 0;
}