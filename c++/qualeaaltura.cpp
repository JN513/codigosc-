#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int a, b, c;

        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        int delta = (b*b - 4*a*c)*-1;

        double altura = delta / 4.0*a;

        printf("%.2lf\n", altura);
    }

    return 0;
}