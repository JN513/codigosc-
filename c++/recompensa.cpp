#include <bits/stdc++.h>

using namespace std;

int n, q, v[100005], temp=1;

vector <int> m[100005];
vector <pair<int,int>> t;
vector <int> r;

void dfs(int x, int c, int d){
    for(int i = 0; i < (int)m[x].size(); i++){
        int k = m[x][i];

        if(v[k] == -1 && k != c && k != d){
            temp++;
            dfs(k, c, d);
        }
    }
}

int main(){
    cin >> n;

    for(int i = 0; i <= n+1; i++) v[i] = -1;

    for(int i = 0; i < n-1; i++){
        int a, b;
        cin >> a >> b;
        m[a].push_back(b);
        m[b].push_back(a);
    }

    cin >> q;

    for(int i = 0; i < q; i++){
        int c, d;
        cin >> c >> d;
        t.push_back({c,d});
    }

    for(int i = 0; i < q; i++){
        dfs(t[i].first, t[i].first, t[i].second);
        dfs(t[i].second, t[i].first, t[i].second);
        r.push_back(temp);
        temp = 1;
        for(int i = 0; i <= n+1; i++) v[i] = -1;
    }

    for(int i = 0; i < r.size(); i++) cout << r[i] << endl;

    return 0;
}