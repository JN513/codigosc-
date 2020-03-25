#include <bits/stdc++.h>

using namespace std;

int n,r, temp;

int v[100005];

void teste(int x)
{
	for (int i = 1; i <= n; ++i)
	{
		if (v[i] >= temp)
		{
			temp = v[i];
		}
		else
		{
			if (v[i] < temp)
			{
				r++;
			}
		}
	}
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cin >> v[i];
	}


	teste(v[0]);


	cout << r;

	return 0;
}
