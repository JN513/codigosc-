#include <bits/stdc++.h>

using namespace std;

int n, m[11][11], r, c[11],l[11], dia1, dia2;

int main(){
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) scanf("%d",&m[i][j]);

    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++){
        c[j] += m[i][j];
        l[i] += m[i][j];
    }

    for(int i = 0; i < n; i++){
         dia1 += m[i][i];
         dia2 += m[i][n-1-i];
    }

    sort(c,c+n);
    sort(l,l+n);

    if (c[0] == c[1] && c[1] == c[n-1] ){
        if (l[0] == l[1] && l[1] == l[n-1]) {
            if (l[0] == c[0]) {
                if (dia1 == dia2) {
                    if (dia1 == l[0]) {
                        r = l[0];
                    }else r = -1;
                }else r = -1;
            } else r = -1;
        }else r = -1;
    } else r = -1;

    printf("%d\n",r);

    return 0;
}
