#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    int v[100005];

    cin >> n >> q;

    for (int i = 0; i < n; i++) cin>>v[i];

    for (int i = 0; i < q; i++) {
        int a,b,r = 0;
        int x[10];
        for (int k = 1; k < 10; k++) x[i] = 0;
        cin>>a>>b;
        for (int j = a-1; j < b; j++) x[v[j]]++;
        for (int k = 1; k < 10; k++){
            if (x[k] == k) r++;
        }
        cout << r<<endl;
    }


    return 0;
}
