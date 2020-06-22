#include <bits/stdc++.h>

using namespace std;

int n, m, v[10005];
long long s;

int main(){

    scanf("%d%d",&n,&m);

    for(int i = 1; i <= n; i++) scanf("%d",&v[i]);

    for(int i = 1; i <= n; i++){
        if (min(v[i], m-v[i]) >= v[i-1]) {
            v[i] = min(v[i], m-v[i]);
            s += v[i];
        }else if (max(v[i], m-v[i]) >= v[i-1]) {
            v[i] = max(v[i], m-v[i]);
            s += v[i];
        }else {
            printf("-1\n");
            return 0;
        }
    }

    printf("%lld\n", s);

    return 0;
}
