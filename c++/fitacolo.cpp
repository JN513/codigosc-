#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, temp = 0;

	int v[10005];
	int k[10005];

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (v[i] == -1)
		{
			for (int j = 0; i < n; ++i)
			{
				if(v[j] == 0 && j < i && j != i)
				{
					if (i - j > 9)
					{
						temp = 9;
						k[i] = temp;
						temp = 0;
						break;
					}
					else
					{
						temp = i - j;
						k[i] = temp;
						temp = 0;
						break;
					}
				}
				else
				{
					if(v[j] == 0 && j > i && j != i)
					{
						if (j - i > 9)
						{
							temp = 9;
							k[i] = temp;
							temp = 0;
							break;
						}
						else
						{
							temp = j - i;
							k[i] = temp;
							temp = 0;
							break;
						}
						break;
					}
				}
			}
		}
	}

	for (int i = 0; i < n; ++i) cout << k[i];

	return 0;
}
