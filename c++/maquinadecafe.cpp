#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    int t1 = 2*b+4*c, t2 = 2*a+2*c, t3 = 2*b+4*a;

    if (t1 <= t2 && t1 <= t3) printf("%d\n", t1);
    else if (t2 <= t3) printf("%d\n", t2);
    else printf("%d\n", t3);

    return 0;
}
