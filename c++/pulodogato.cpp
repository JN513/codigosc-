#include <bits/stdc++.h>

using namespace std;

#define oo 10000000

int matriz[505][505];
int dist[505][505];

int m, n, r;

void bfs(int i, int j)
{
	queue< pair<int,int> > fila;

	fila.push({i,j});

	while(fila.size())
	{
		int l = fila.front().first;
		int c = fila.front().second;
		fila.pop();

		for(int dl = -2; dl <= 2; dl++)
		{
			for(int dc = -2; dc <= 2; dc++)
			{
				int l2 = i+dl;
				int c2 = j+dc;
				if(l2 < m and l2 >=0 and c2 < n and c2 >= 0 and dist [l2][c2] == oo and matriz[l2][c2] = 1)
				{
					dist [l2] [c2] = dist[l][c]+1;
					fila.push({l2,c2});
				}
			}
		}
	}

}

int main()
{
	cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matriz[i][j];
			dist[i][j] = oo;
		}
	}

	dist[0][0] = 0;

	bfs(0,0);

	if (dist[m][n] = oo)
	{
		r = -1;
	}
	else
	{
		r = dist[m][n];
	}

	cout << r;

	return 0;
}
