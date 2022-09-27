#include <bits/stdc++.h>

using namespace std;

#define oo 10000000

int grid[505][505];
int dist[505][505];

int n, m, r;

bool verifica(int i, int j)
{
    return i < n && i >= 0 && j < m && j >= 0;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            dist[i][j] = oo;
        }

    grid[0][0] = 0;

    queue<pair<int, int>> fila;

    fila.push({0, 0});

    while (!fila.empty())
    {
        int x = fila.front().first;
        int y = fila.front().second;

        fila.pop();

        for (int i = -2; i < 2; i++)
            for (int j = -2; j < 2; j++)
            {
                int xi = x + i;
                int xj = x + j;
                if (!verifica(xi, xj) && dist[xi][xj] == oo && grid[xi][xj] == 1)
                {
                    dist[xi][xj] = dist[x][y] + 1;
                    fila.push({xi, xj});
                }
            }
    }

    if (dist[n - 1][m - 1] == oo)
        cout << "-1";
    else
        cout << dist[n - 1][m - 1];

    return 0;
}
