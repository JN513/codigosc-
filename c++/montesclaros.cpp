#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;
    vector <pair<int, int>> montes;

    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        montes.push_back({a,b});
    }

    sort(montes.begin(), montes.end(), [](pair<int, int> a, pair<int, int> b ){
        return a.first < b.first;
    });

    bool ok = true;
    int menor = montes[0].second;

    for(int i = 1; i < n; i++){
        if(montes[i].second >= montes[i-1].second or montes[i].second >= menor) ok = false;
        else {
            menor = montes[i].second;
        }
    }

    if(ok) cout << "S\n";
    else cout << "N\n";

    return 0;
}