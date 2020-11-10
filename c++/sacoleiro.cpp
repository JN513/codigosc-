#include <bits/stdc++.h>

using namespace std;

int n, t, r, visi[32];
vector<int> m[32];
vector <pair<int,char>> city;

void dfs(){

}

int main(void){
    cin >> n >> t;

    for(int i = 0; i < n; i++){
        int a, mo, v; char b;
        cin >> a >> mo >> b >> v;
        city.push_back({mo,b});
        for(int j = 0; j < v; j++){
            int x;
            cin >> x;
            m[a].push_back(x);
        }
    }


    return 0;
}