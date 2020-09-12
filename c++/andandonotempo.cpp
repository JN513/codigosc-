#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if(a == b || b == c || c == a) printf("S\n");
    else if(a+b == c || a+c == b || c+b == a) printf("S\n");
    else printf("N\n");

    return 0;
}
