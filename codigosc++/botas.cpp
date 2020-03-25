#include <bits/stdc++.h>

using namespace std;

int n,r;

vector <char> v;
vector<int> k;

void verifica(int x, char c)
{
	for(int i = 0; i < n; ++i)
	{
		if(k[i] == x && v[i] == c )
		{
			r++;
		}
	}
}

int main()
{
    cin >> n;

	char temp;

	for (int i = 0; i < n; ++i)
	{
		int a; char b;
		cin >> a >> b;
		v.push_back(b);
		k.push_back(a);
	}

	for (int i = 0; i < v.size(); ++i)
	{
		if(v[i] == 'D')
		{
			temp = 'E';
		}
		verifica(k[i], temp);
	}

	cout << r/2;

	return 0;
}
