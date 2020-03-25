#include <bits/stdc++.h>

using namespace std;

#define NMAX 10005

int a[105];

vector <int> r;

int main()
{
	int x = 1, y = 1, z = 0;

	cin >> x >> y;

	while(x !=0 && y != 0)
	{
		vector <int> v[NMAX];
		z++;
		int j = 0, k =0;

		for (int i = 0; i < y; i++)
		{
			int b, c;
			cin >> b >> c;
			v[b].push_back(c);
			v[c].push_back(b);

		}

		for (int i = 0; i < x; i++)
		{
			if (v[i].size() > j)
			{
				j = v[i].size();
				r.clear();
				r.push_back(i);
			}
			else
			{
				if(v[i].size() == j)
				{
					r.push_back(i);
				}
			}
		}

		sort(r.begin(), r.end());

		cout << "Teste "<<z << endl;
		for (int i = 0; i < r.size(); i++)
		{
				cout << r[i]<<" ";
		}

		r.clear();
		cout << endl << endl;

		cin >> x >> y;

	}

	return 0;
}
