#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, r;
priority_queue <int> fila;

int main(void){
    cin >> n;

    for(int i = 0, a; i < n; i++){
        cin >> a;

        fila.push(a);
    }

    while(!fila.empty()){
        for(int i = 0; i < 3 and !fila.empty(); i++){
            int a = fila.top();
            fila.pop();
            if(i == 2) continue;
            r += a;
        }
    }

    cout << r << nl;

    return 0;
}