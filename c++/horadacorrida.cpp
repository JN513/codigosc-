#include <bits/stdc++.h>

using namespace std;

int main(void){
    double x, n, pv;

    cin >> n >> x;

    pv = 100.0/x;

    cout << pv;

    double a = (10.0/pv)*n, b = (20.0/pv)*n, c = (30.0/pv)*n, d = (40.0/pv)*n, e = (50.0/pv)*n, f = (60.0/pv)*n, g = (70.0/pv)*n, h = (80.0/pv)*n, i = (90.0/pv)*n;
    int j=(int)a, k=(int)b, l=(int)c, m=(int)d, z=(int)e, o=(int)f, p=(int)g, q=(int)h, r=(int)i;
    cout << j<<" "<< k<<" "<< l<<" "<< m<<" "<< z<<" "<<o<<" ";
    cout << p<<" "<< q<<" "<< r<<" "<<endl;

    return 0;
}