#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m;
vector<pair<int,int>> v;

int main(void){
    cin >> n >> m;

    for(int i = 0, a, b ; i < m; i++){
        cin >> a >> b;
        v.push_back({a,b});
    }

    sort(v.begin(), v.end());

    pair<int, int> davez = v[0];

    for(int i = 1; i < v.size(); i++){
        if(davez.second < v[i].first) {
            cout << davez.first << " " << davez.second << nl;
            davez = v[i];
        }
        else if(davez.second < v[i].second) davez.second = v[i].second;
    }

    cout << davez.first << " " << davez.second << nl;

    return 0;
}