#include <bits/stdc++.h>

using namespace std;

int r;

int v[1005];

int main()
{
	int n;

	cin >> n;

	for (int i = 1; i < n; ++i)
	{
		cin >> v[i];
	}

	sort(v, v+n);

	for (int i = 0; i < n+1; ++i)
	{
		if(v[i] != i)
		{
			if (v[i] > i && v[i-1] == i-1)
			{
				r = i;
				break;
			}
			else
			{
				if (v[i] > i && v[i-1] == i-1)
				{
					r = i;
					break;
				}
			}
		}
	}

	cout << r;

	return 0;
}
