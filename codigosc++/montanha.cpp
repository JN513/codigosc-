#include <iostream>

using namespace std;

int m, r;
int v[1005];

int main()
{
    cin >> m;

    for(int i = 0; i < m; i++) cin >> v[i];

    for(int i = 0; i < m; i ++)
        if (v[i] > v[i-1]  && v[i] > v[i+1] )r = r + 1;

    if (r > 1) cout << "S\n";
    else cout << "N\n";

    return 0;
}
