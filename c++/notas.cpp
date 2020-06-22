#include <bits/stdc++.h>

using namespace std;

int n, temp, w;

int v[205];
vector <int> k[110];

int main()
{
    cin >> n;

	char temp;

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0; i <= n; ++i)
	{
			k[v[i]].push_back(1);
	}

	for (int i = 0; i <= n; ++i)
	{
		if(k[v[i]].size() > temp )
		{
			temp = k[v[i]].size();
			if (v[i] > w)
			{
				w = v[i];
				cout << w << endl;
			}
		}
	}

	cout << w;

	return 0;
}
