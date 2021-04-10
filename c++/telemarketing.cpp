#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, l;

int ven[1002];

priority_queue< pair <int,int> , vector <pair <int,int>> , greater<pair<int,int> > > fila;

int main(void){
    cin >> n >> l;

    for(int i = 0; i < n; i++) fila.push({0,i});

    for(int i = 0; i < l; i++){
        int a;

        cin >> a;

        int m = fila.top().first;
        int x = fila.top().second;

        fila.pop();

        ven[x]++;

        fila.push({m+a, x});
    }

    for(int i = 0; i < n; i++) cout << i+1 << " " << ven[i] << nl;

    return 0;
}