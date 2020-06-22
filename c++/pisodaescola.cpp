#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m ,r1 = 0,r2;

    scanf("%d%d",&n,&m);

    r2 = (n-1)*2+(m-1)*2;
/*
    do{
        r1 += n*m;
        n--;
        m--;
    }while (n > 1 && m > 1);
*/
    r1 = (n*m)+(n-1)*(m-1);
    printf("%d\n",r1);
    printf("%d\n",r2);

    return 0;
}
