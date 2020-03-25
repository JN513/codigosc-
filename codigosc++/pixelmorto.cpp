#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, area = 0, temp = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if(a > b && y > x)
        {
            area = (a - x - 1) * b;
        }
        else
        {
            if(a > b && y <= x)
            {
                area = (a - x - 1) * b;
                temp = a * (b - y - 1);
                if (area > temp)
                {
                    temp = 0;
                }
                else
                {
                    area = temp;
                }
            }
            else
            {
                if (b > a && x > y)
                {
                    area = a * (b - y - 1);
                }
                else
                {
                    if(a < b && y >= x)
                    {
                        area = (a - x - 1) * b;
                        temp = a * (b - y - 1);
                        if (area > temp)
                        {
                            temp = 0;
                        }
                        else
                        {
                            area = temp;
                        }
                    }
                }
            }
        }
        cout <<area;
        temp = 0; area = 0;
    }

    return 0;
}
