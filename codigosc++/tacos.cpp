#include <bits/stdc++.h>

using namespace std;

int r;

int v[100005];
vector <int> w[100005];

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; ++i)
	{
		w[v[i]].push_back(1);
	}

	for (int i = 0; i < n; ++i)
	{
		if(w[v[i]].size() == 1)
		{
			r +=2;
		}
		else
		{		
			if (w[v[i]].size() == 2)
			{
				r += 1;
			}
			else
			if(w[v[i]].size() % 2 == 0)
			{
				r += w[v[i]].size() / 2;
			}
			else
			{
				r += w[v[i]].size() / 2 + 1;
			}
		}
	}

	cout << r;

	return 0;
}