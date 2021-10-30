#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, t = 100;

    vector <int> v;

    cin >> n;

    v.push_back(t);

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        t += x;
        v.push_back(t);
    }

    sort(v.begin(), v.end(), greater<int>());

    cout << v[0] << nl;

    return 0;
}