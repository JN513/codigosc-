#include <bits/stdc++.h>

using namespace std;

int n;

int a, k, j , q;

vector <string> m;
vector <string> d;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        m.push_back(x);
    }

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m[i].size(); j++)
        {
            if (m[i][j] =='A' || m[i][j] == 'a')
            {
                a++;
            }
            else
            {
                if (m[i][j] =='K' || m[i][j] == 'k')
                {
                    k++;
                }
                else
                {
                    if (m[i][j] =='J' || m[i][j] == 'j')
                    {
                        j++;
                    }
                    else
                    {
                        if (m[i][j] =='Q' || m[i][j] == 'q')
                        {
                            q++;
                        }
                    }
                }
            }
        }
        if (a > 0 && k > 0 && j > 0 && q > 0)
        {
            d.push_back("Aaah muleke");
        }
        else
        {
            d.push_back("Ooo raca viu");
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << d[i]<< endl;
    }

    return 0;
}
