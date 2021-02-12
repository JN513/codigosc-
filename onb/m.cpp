#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int m;
float n, res = 0;

vector<float> v, r;

int main(void){
    cin >> m >> n;

    for(int i = 0; i < m; i++){
        float a;
        cin >> a;
        v.push_back(a);
        if(i >= n-1) {
            res -= v[i-n];
            res += v[i];
            cout.precision(1);
            cout.setf(ios::fixed);
            cout << res/n << nl;
        }
        else res += v[i];
    }
/*
    for(int i = 0; i < r.size(); i++){
        cout.precision(1);
        cout.setf(ios::fixed);
        cout << r[i]/n << nl;
    }
*/
    return 0;
}