#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

struct Carne{
    double a, b, c;

    void get_c(){
        c = (1000.00/b)*a;
    }
};

int main(void){
    int n;
    Carne carnes[105];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%lf", &carnes[i].a);
        scanf("%lf", &carnes[i].b);
        carnes[i].get_c();
    }

    sort(carnes, carnes+n, [](Carne a, Carne b){
        return a.c < b.c;
    });

    printf("%.2lf\n", carnes[0].c);

    return 0;
}