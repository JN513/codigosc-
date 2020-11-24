#include <bits/stdc++.h>

using namespace std;

int n, v[100002];

vector<int> r;

int main(void){
    cin >> n;

    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++){

    }

    sort(r.begin(),r.end(), [](int a, int b){
        return a > b;
    });

    cout << r[0];

    return 0;
}