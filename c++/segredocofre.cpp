#include <bits/stdc++.h>

using namespace std;

int w[10];
int v[10005];
int k[10005];

int main()
{
	int n, m, temp = 0;

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> k[i];
	}

	for (int i = 0; i < m; ++i)
	{
        if(temp > k[i])
        {
            for(int j = k[i]; j <  temp; j++)
            {
                w[v[k[j]-1]]++;
            }
        }
        else
        {
            for(int j = temp; j <  k[i]; j++)
            {
                w[v[k[j]-1]]++;
            }
        }
        temp = k[i];
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << w[i];
	}

	return 0;
}
