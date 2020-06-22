#include <bits/stdc++.h>

using namespace std;

#define NMAX 5010

int r;

vector <int> ma[NMAX];

void dfs(){

}

int main()
{
	int n, m, x, k;

	x = n/m;

	cin >> n >> m;

	for (int i = 0; i < m; i++){
		for (int j = 0; j < x; j++)
		{
			cin >> k;
			ma[i].push_back(k);
		}
	}


	return 0;
}