#include <bits/stdc++.h>

using namespace std;


int main(){
    cin >> q;

    for (int i = 0; i < q; i++) {
        int n, m,pb,pe, r=0, v[100005];
        vector<int> m[100005];

        cin>>n>>m>>pb>>pe;

        for(int i = 0; i < n; i++) v[i] = -1;

        for(int i = 0; i < m; i++){
            int a, b;
            cin >>a>>b;
            v[a].push_back(b);
        }

        
    }

    return 0;
}
