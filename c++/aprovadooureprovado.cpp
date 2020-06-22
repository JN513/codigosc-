#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b;

    cin >> a >> b;

    double c = (a+b)/2;

    if (c < 4)
    {
        cout <<"Reprovado";
    }
    else
    {
        if (c < 7 && c >= 4)
        {
            cout <<"Recuperacao";
        }
        else
        {
            if (c >= 7)
            {
                cout <<"Aprovado";
            }
        }
    }
    return 0;
}
