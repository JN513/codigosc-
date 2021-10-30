#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    double r = a/((b+c)/2.0);

    printf("%.5lf\n", r);

    return 0;
}