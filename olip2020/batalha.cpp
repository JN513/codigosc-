#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, e , f, r1, r2;

    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

    r1 = a+b+c+f;
    r2 = d+e;

    if(r1 >= r2) printf("Middle‐earth is safe.\n");
    else printf("Sauron has returned.\n");

    return 0;
}
