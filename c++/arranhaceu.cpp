#include <bits/stdc++.h>

using namespace std;

int n, m, v[100002];

int qtd_mora(int k){
    int qtd = 0;
    for (int i = 0; i < k; i++) qtd += v[i];
    return qtd;
}

int main(){
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < m; i++){
        int a, b, c;
        cin >> a;

        if(a == 0){
            cin >> b >> c;
            v[b-1] = c;
        }

        if (a == 1){
            cin >> b;
            int r = qtd_mora(b);
            cout << r << endl;
        }
    }

    return 0;
}