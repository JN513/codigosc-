#include <bits/stdc++.h>

using namespace std;

int main(){
    float x, n, p= 1.0;

    scanf("%f%f",&x,&n);

    for (int i = 1; i < n; i++) {
        p = p * (1-(i/x));
    }

    float r = 1 -p;

    printf("%0.2f\n",r*100);

    return 0;
}
