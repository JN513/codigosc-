#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, q, vec[100005],t[400009], vd;

void build(int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = vec[tl];
    } else {
        int tm = (tl + tr) / 2;
        build( v*2, tl, tm);
        build( v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}

int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        //if(t[v] > vd) return 1;
        //else return 0;
        cout << t[v] << nl;
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] + t[v*2+1];
    }
}

int main(void){
    cin >> n >> q;

    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    build(1, 1, n);

    for(int i = 0; i < q; i++){
        int a, b, c, d;

        cin >> a >> b >> c;

        if(a == 2){
            cin >> d;
            vd = b;
            cout << sum(1, 1, n, c, d ) << nl;
        } else{
            update(1, 1, n, b, c);
        }
    }

    return 0;
}