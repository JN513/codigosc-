#include <bits/stdc++.h>

using namespace std;

int ord(int a, int b)
{
    return a > b;
}

int main()
{
    int v[10];

    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    sort(v, v+10);

    for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    sort(v, v+10, ord);

    for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
