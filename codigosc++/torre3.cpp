#include <bits/stdc++.h>

using namespace std;

int m[1005][1005];
int k[1005];// linhas
int q[1005];// colunas

int ord(int a, int b){
    return a > b;
}

int main()
{
    int n;
    vector <int> r;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            k[i] += m[i][j];
            q[j] += m[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int z = k[i] + q[j] - (2 * m[i][j]);
            r.push_back(z);
        }
    }

    sort(r.begin(), r.end(), ord);

    cout << r[0];

    return 0;
}
