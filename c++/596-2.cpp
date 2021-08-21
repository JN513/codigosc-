#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int x, n, m, k, v[100];

int main(void){
    scanf("%d"&x);

    for(int k = 0; k < x; k++){
        scanf("%d%d%d", &n, &m, &k);

        for(int i = 0; i < n; i++){
            scanf("%d", v+i);
        }
    }

    return 0;
}