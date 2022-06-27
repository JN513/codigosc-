#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    /* print
    4 Hobbit(s)
2 Humano(s)
1 Elfo(s)
1 Anao(s)
1 Mago(s)

● A - Para anões;
● E - Para elfos;
● H - Para humanos;
● M - Para magos;
● X - Para hobbits (X, pois todo hobbit é uma incógnita para o mundo).
*/

    int n, a = 0, e = 0, h = 0, m = 0, x = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        string s; char c;

        cin >> s >> c;

        if(c == 'A'){
            a++;
        } else if(c == 'E'){
            e++;
        } else if(c == 'H'){
            h++;
        } else if(c == 'M'){
            m++;
        } else if(c == 'X'){
            x++;
        }
    }

    cout << x << " Hobbit(s)" << nl;
    cout << h << " Humano(s)" << nl;
    cout << e << " Elfo(s)" << nl;
    cout << a << " Anao(s)" << nl;
    cout << m << " Mago(s)" << nl;

    return 0;
}