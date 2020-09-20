#include <bits/stdc++.h>

int main(){
    int x, n, r = 0;

    scanf("%d%d",&x,&n);

    for(int i = x; i < n; i++)if(i%x == 0) r++;

    printf("%d\n",r);

    return 0;
}