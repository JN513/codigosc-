#include <bits/stdc++.h>

using namespace std;

#define NMAX 20105

int n, m, r;

vector <int> lista [NMAX];

int v[20005];
int t[20005];

void dfs(int x)
{
    v[x] = 1;

    if (t[x] == 4)
    {
        r++;
    }
    for (int i = 0; i < lista[x].size(); i++)
    {
        int d = lista[x][i];

        if (v[d] == 0) {
            dfs(d);
        }
    }

}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;

        cin >> a >> b;

        lista[b].push_back(a);
        lista[a].push_back(b);
    }

    for (int i = 0; i < n; i++) {
        t[i]= lista[i].size();
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            dfs(i);
        }
    }

    cout << r;

    return 0;
}
