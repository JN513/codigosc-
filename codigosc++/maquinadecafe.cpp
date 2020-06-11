#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if ((2*b+4*c) <= a) printf("%d\n", 2*b+4*c);
    if ((2*a+2*c) <= b) printf("%d\n", 2*a+2*c);
    if ((2*b+4*a) <= c) printf("%d\n", 2*b+4*a);

    return 0;
}
