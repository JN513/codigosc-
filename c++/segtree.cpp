#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define MAXN 1000000

using namespace std;

int t[4*MAXN];
int a[MAXN];

void build(int i, int l, int r){
    if(l == r){
        t[i] = a[l];
    } else{
        int meio = (l+r)/2;

        build(2*i, l, meio);
        build(2*i+1, meio+1, r);
        t[i] = t[2*i] + t[2*i+1];
    }

}

int query(int i, int l, int r, int ql, int qr){
    if(ql <= l && r <= qr) return t[i];
    if(qr < l || r < ql) return 0;

    int meio = (l+r)/2;

    return query(2*i, l, meio, ql, qr) + query(2*i+1, meio+1, r, ql, qr);
}

void update(int i, int l, int r, int p, int x){
    if(l == r){
        t[i] = x;
    } else{
        int meio = (l+r)/2;
        if(p <= meio) update(2*i, l, meio, p, x);
        else update(2*i+1, meio+1, r, p, x);
    }
}

int main(void){

    return 0;
}