#include <bits/stdc++.h>

using namespace std;

int n, r, z;

vector<pair<int, int>> m[50002];
int v[50002];

void dfs(){
    
}


int main(){
    cin >> n;

    for(int i = 0; i < n-1; i++){
        int a, b, c;
        cin >> a >> b >> c;
        m[a].push_back({b, c});
        m[b].push_back({a, c});
    }


    return 0;
}