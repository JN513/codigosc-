#include <bits/stdc++.h>

int main(){

    int a,b,r = 0;

    scanf("%d%d",&a,&b);

    if(b > a){
        r = a;
        a = b;
        b = r;
        r = 0;
    }

    for(int i = b+1; i < a; i++) if (i % 2 != 0) r += i;

    printf("%d\n",r);

    return 0;
}