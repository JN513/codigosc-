#include <bits/stdc++.h>

using namespace std;

int in, pa, po, ne; 

int main(){
    for(int i = 0, a; i < 4; i++) {
        cin >> a;
        pa += (abs(a)%2 == 0);
        in += (abs(a)%2 != 0);
        po += (a > 0);
        ne += (a < 0);
    }

    cout << pa << "valor(es) par(es)\n";
    cout << in << "valor(es) impar(es)\n";
    cout << po << "valor(es) positivo(s)\n";
    cout << ne << "valor(es) negativo(s)\n";

    int a = (2 > 1) ? 3 : 4;
    int b = (2 > 3) ? 3 : 4;

    cout << a << ' ' << b;

    return 0;
}