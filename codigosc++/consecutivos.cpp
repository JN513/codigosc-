#include <bits/stdc++.h>

using namespace std;

#define NMAX 100005

int n, m;

int v[NMAX];

int k, j;

int buscabi(int x)
{
    int ini=1, fim = n, meio;

    while (ini <= fim)
    {
        meio = (ini+fim)/2;

        if (v[meio] + v[meio +1] == x)
        {
            /*k = v[meio];
            j = v[meio +1];*/
            k = v[meio]; j = v[meio +1];
            break;

        }
        else
        {
            if (v[meio] + v[meio - 1] == x) {
                /*k = v[meio-1];
                j = v[meio];*/
                k = v[meio-1]; j = v[meio];
                break;
            }
        }

        if (v[meio] + v[meio +1] > x)
        {
            fim = meio -1;
        }
        else
        {
            if (v[meio] + v[meio - 1] > x) {
                ini = meio + 1;
            }
        }
        return k, j;
    }
}
int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    cin >> m;

    buscabi(m);

    cout << k << " " << j;

    return 0;
}
