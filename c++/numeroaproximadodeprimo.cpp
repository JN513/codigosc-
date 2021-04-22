#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

double n, r1, r2;

int main(void){
    scanf("%lf",&n);

    r1 = n/log(n);
    r2 = 1.25506*(n/log(n));

    printf("%.1lf %.1lf\n", r1, r2);

    return 0;
}