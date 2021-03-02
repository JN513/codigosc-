#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m;

vector <int> v;

int main(void){
    cin >> n >> m;

    for(int a, i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }

    for(int a, b, i = 0; i < m; i++){
        cin >> a >> b;

        if(a == 1){
            v[b-1] = 1-v[b-1];
        }
        if(a == 2){
            vector <int> x = v;
            sort(x.begin(), x.end(), [](int a, int b){
                return a > b;
            });
            cout << x[b-1] << nl;
        }
    }

    return 0;
}