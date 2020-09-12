#include <bits/stdc++.h>

using namespace std;

vector <int> r;

int main()
{
	int x = 1, y = 1, z = 0;

	cin >> x >> y;

	while(x !=0 && y != 0)
	{
		int a[105];
		for (int i = 0; i <= x; i++) a[i] = 0;
		z++;
		int j = 0, k =0;

		for (int i = 0; i < y; i++){
			int b, c;
			cin >> b >> c;
			a[b] ++;
			a[c] ++;
		}

		for (int i = 1; i <= x; i++){
			if (a[i] > j){
				j = a[i];
				r.clear();
				r.push_back(i);
			}
			else if(a[i] == j) r.push_back(i);
		}

		sort(r.begin(), r.end());

		cout << "Teste "<<z << endl;
		for (int i = 0; i < r.size(); i++){
				cout << r[i]<<" ";
		}
		r.clear();
		cout << endl;

		cin >> x >> y;

	}

	return 0;
}
