#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, r = 0;

    pair <int,int> v[100005];

    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;

        cin >> a >> b;

        v[i] = {a, b};
    }

    for(int i = 0; i < n; i++){
        int d = 0;

        for(int j = 0; j < n; j++){
            if(j == i) continue;
            if( abs(v[i].first - v[j].first) == abs(v[i].second - v[j].second) ){
                d++;
            }
        }

        if(d == 0){
            r++;
        }
    }

    cout << r << nl;

    return 0;
}