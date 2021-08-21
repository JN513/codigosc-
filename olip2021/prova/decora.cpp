#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;
int v[1005];

int main(void){
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", v+i);
    }

    for(int i = 0; i < n; i++){
        double ra2 = v[i]/(4*3.14);
        double ra = sqrt(ra2);

        if(ra < 12){
            printf("vermelho = R$ %.2lf\n",v[i]*0.09);
        } else if (ra <= 15){
            printf("azul = R$ %.2lf\n",v[i]*0.07);
        } else if (ra > 15){
            printf("amarelo = R$ %.2lf\n",v[i]*0.05);
        }
    }

    return 0;
}