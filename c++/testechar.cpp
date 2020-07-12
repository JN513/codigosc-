#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, n1,n2;
    char v[3];

    scanf("%d",&n);
    scanf("%d",&n1);
    scanf("%s",&v[0]);
    scanf("%d",&n2);

    if(v[0] == '+')
        if(n1+n2 > n)printf("OVERFLOW!!!\n");
        else printf("OK");
    if(v[0] == '-')
        if(n1-n2 > n) printf("OVERFLOW!!!\n");
        else printf("OK");
    if(v[0] == '*')
        if(n1*n2 > n)printf("OVERFLOW!!!\n");
        else printf("OK");
    if(v[0] == '/')
        if(n1/n2 > n)printf("OVERFLOW!!!\n");
        else printf("OK");

    return 0;
}
