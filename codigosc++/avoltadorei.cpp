#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, r = 0, x, limit, d;

    char k, temp;

    char runa[101];
    int valorruna[101];

    cin >> n >> limit;

    for (int i = 0; i < n; i++) {
        cin >> k >> x;

        runa[i] =  k;
        valorruna[i] = x;
    }

    cin >> d;

    for (int i = 0; i < d; i++) {
        cin >> temp;

        for (int i = 0; i < n; i++) {
            if (runa[i] == temp)
            {
                r += valorruna[i];
                break;
            }
        }

    }

    cout << r << endl;

    if (r >= limit) {
        cout << "You shall pass!" << endl;
    }
    else
    {
        cout << "My precioooous" << endl;
    }

    return 0;
}
