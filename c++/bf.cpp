#include <bits/stdc++.h>

using namespace std;

#define NMAX 505

int n, u, x, r, temp, tempin;

std :: vector <int> m[NMAX];

int v[NMAX];
vector <int> y;

void dfs(int w)
{
    for(int i = 0; i < m[w].size(); i++)
    {
        int z = m[w][i];
        if(v[z] == 0)
        {
            v[z] = v[w];
            dfs(z);
        }
    }
}

int main()
{
    cin >> n >> u;

    for(int i = 0; i < u; i++)
    {
        int a, b;
        cin >> a >> b;
        m[a].push_back(b);
        m[b].push_back(a);
    }

    cin >> x;

    for(int i = 0; i < x; i++)
    {
        int k;
        cin >> k;
        v[k] = -1;
    }

    for(int i = 0; i < n; i++)
    {
        if(v[i] == 0)
        {
            r++;
            v[i] = r;
            dfs(i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        tempin++;
        if (v[i] !=temp && v[i] != -1)
        {
            y.push_back(tempin);
            temp = v[i];
            tempin = 0;
        }
    }

    sort(y.begin(), y.end());

    cout << "Quantidade de familias: "<< r << endl;
    cout << "Numero de habitantes em cada: ";
    for(int i = 0; i < y.size(); i++)
    {
        cout<<y[i];
        if(i == y.size() - 2)
        {
            cout <<" e ";
        }
        else
        {
            cout <<", ";
        }
    }

    return 0;
}
