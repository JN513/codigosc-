#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

struct Moto{
    char d;
    int a, r;
};

int t, n, res;

int main(void){
    cin >> t >> n;

    queue <Moto> fila;

    for(int i = 0; i < n; i++){
        char c; int a, r;

        cin >> c >> a >> r;

        Moto temp;
        temp.d = c;
        temp.a = a;
        temp.r = r;

        fila.push(temp);
    }

    int tempo = 0;
    char last_c = 'z';

    while (!fila.empty()){
        Moto x = fila.front();
        fila.pop();

        if(last_c != x.d and last_c != 'z'){
            tempo += t;
        } else {
            if(last_c != 'z') {
                tempo += 3;
            }
        }

        if(last_c != x.d) last_c = x.d;

        if(tempo - x.a > x.r) {
            res++;
            //cout << x.d << " " << x.a << " " << x.r << " " << tempo << nl;
        }

        if(tempo < x.a){
            tempo = x.a;
        }
    }

    cout << res << nl;

    return 0;
}