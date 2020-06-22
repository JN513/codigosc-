#include <bits/stdc++.h>

using namespace std;

int n, y;

vector <int> m[10005];
int v[10005];

int r =true;

void dfs(int x)
{
	v[x] = 1;
	for(int i = 0; i < m[x].size() ; i++)
	{

		int z = m[x][i];

		if(m[z].size()== 0 || m[z].size() >= 2)
		{
		  r = false;
			v[z] = 1;
			return;
		}

		if(v[z] == 0)
		{
			dfs(z);
		}
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;

		m[a].push_back(b);
	}

	for(int i = 0; i < n; i++)
	{
		if (v[i] == 0)
		{
			y++;
			dfs(i);
		}
	}


	if (y > 2)
	{
		r = false;
	}

	if(r == true)
	{
		cout <<"S";
	}
	else
	{
		cout <<"N";
	}
	return 0;
}
