#include <bits/stdc++.h>

using namespace std;

int n, v[52],r[52];

int main(){
    scanf("%d",&n);

    for(int i = 1; i <= n; i++) scanf("%d",&v[i]);

    for (int i = 1; i <= n; i++) {
        if (v[i] == 1 && v[i-1] == 1 && v[i+1] == 1) r[i] = 3;
        if (v[i] == 1 && v[i-1] == 1 && v[i+1] != 1) r[i] = 2;
        if (v[i] == 1 && v[i-1] != 1 && v[i+1] == 1) r[i] = 2;
        if (v[i] != 1 && v[i-1] == 1 && v[i+1] == 1) r[i] = 2;
        if (v[i] != 1 && v[i-1] != 1 && v[i+1] == 1) r[i] = 1;
        if (v[i] == 1 && v[i-1] != 1 && v[i+1] != 1) r[i] = 1;
        if (v[i] != 1 && v[i-1] == 1 && v[i+1] != 1) r[i] = 1;
    }

    for(int i = 1; i <= n; i++) printf("%d\n", r[i]);

    return 0;
}
