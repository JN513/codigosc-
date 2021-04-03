#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    scanf("%d",&n);

    int anos = n/365;
    int meses = (n-(anos*365))/30;
    int dias = n-(anos*365)-(meses*30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos, meses, dias);

    return 0;
}
