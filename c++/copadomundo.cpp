#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    queue <char> fila;

    for(char i = 'A'; i <= 'P'; i++) fila.push(i);

    for(int i = 0, a, b; i < 15; i++){
        cin >> a >> b;

        char p1 = fila.front();
        fila.pop();
        char p2 = fila.front();
        fila.pop();

        if(a > b) fila.push(p1);
        else if( b > a) fila.push(p2);
    }

    cout << fila.front() << nl;

    return 0;
}