#include<bits/stdc++.h>

using namespace std;

int v[3];
int i = 2;

int calc(int n, int a, int b, int c)
{

    v[0] = a; v[1] = b; v[2] = c;

    sort(v, v+3);

    int x = v[0];

    if(v[0] + v[1] == n || v[0] + v[2] == n || v[1] + v[2] == n )
    {
        return 2;
    }

    if(n == a && n == b && n == c)
    {
        return 1;
    }
    if(a == 1 || b == 1 || c == 1)
    {
        return n;
    }

    if(n/v[2] == 2 && n%v[1] != 2 && n%v[0] != 2   )
    {
        return 2;
    }

    return n/v[0];

}

int main()
{
    int n,a,b,c;

    cin >> n >> a >> b >> c;

    cout << calc(n, a, b, c);

    return 0;
}
