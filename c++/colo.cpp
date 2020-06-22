#include <bits/stdc++.h>

using namespace std;

int dirx[8] = {1,0,-1,0,-1,1,1,-1};
int diry[8] = {1,1,1,-1,-1,-1,0,0};

int n, m;

int w[200][200];

int r = 0;

void dfs(int i, int j)
{
	w[i][j] = 1;
	r++;
	for (int k = 0; k < 8; k++)
	{
		if((i+dirx[k]) >= 0 && (i+dirx[k]) < n && (j+diry[k]) >= 0 && (j+diry[k]) < m && w[i+dirx[k]][j+diry[k]] == 0  )
		{
			dfs(i+dirx[k], j+diry[k]);
		}
	}

}

int main()
{
	int x, y, k, t, z;

	cin >> n >> m >> x >> y >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> t >> z;
        w[t-1][z-1] = 1;
	}

	dfs(x-1,y-1);

	cout << r;

	return 0;
}
