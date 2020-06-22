#include<bits/stdc++.h>

using namespace std;

int v, d, y = 0;

vector <int> m;
vector <int> k;

int calc(int n, int k)
{
    if(n <= k)
    return 1;
    int p1 = n/2;
    int p2 = n - p1;
    return calc(p1,k) + calc(p2, k);
}

int main()
{
    for(int i = 0; i < 1000; i++)
    {
            cin >> v>>d;

            if(v == 0 && d == 0)
            {
                y = i;
                break;
            }


            m.push_back(v);
            k.push_back(d);


    }
//
    for(int i = 0; i < k.size(); i++)
    {
            cout << calc(m[i], k[i])<< endl;

    }



    return 0;
    // oi
}
//oiiii
// bora coda aldo
