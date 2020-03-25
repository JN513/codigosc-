#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int d, e, f;

    if (a < b && a < c)
    {
        d = 1;
    }
    else
    {
        if (b < c && b < a)
        {
            d = 2;
        }
        else
        {
            if (c < b && c < a)
            {
                d = 3;
            }
        }
    }

    if (a < b && a > c)
    {
        e = 1;
    }
    else
    {
        if (b > c && b < a)
        {
            e = 2;
        }
        else
        {
            if (c > b && c < a)
            {
                e = 3;
            }

            else
            {
                if (b < c && b > a)
                {
                    e = 2;
                }
                else
                {
                    if (c < b && c > a)
                    {
                        e = 3;
                    }
                    else
                    {
                        if (a > b && a < c)
                        {
                            e = 1;
                        }
                    }
                }
            }
        }
    }

    if (a > b && a > c)
    {
        f = 1;
    }
    else
    {
        if (b > a && b > c)
        {
            f = 2;
        }
        else
        {
            if (c > a && c > b)
            {
                f = 3;
            }
        }
    }

    cout << d << endl << e << endl << f;

    return 0;
}
