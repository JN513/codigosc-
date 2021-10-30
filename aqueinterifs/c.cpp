#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;


int valor, x, m25, m10, m5, m1;
int tt;
char lixo;

int main(void){
    scanf("%c", &lixo);
    scanf("%c", &lixo);
    scanf("%d.%d", &valor, &x);
    scanf("%d", &m25);
    scanf("%d", &m10);
    scanf("%d", &m5);
    scanf("%d", &m1);

    //printf("valor: %d\nx: %d\n", valor, x);

    valor = valor*100;
    valor += x;

    int mg = m25+m10+m5+m1, preco = valor;

    while(true){
        valor = preco;
        if(m25 > 0){
            int temp = valor/25;
            if(temp > 0){
                if(m25 > temp){
                    valor -= temp*25;
                    m25 -= temp;
                } else {
                    valor -= m25*25;
                    m25 = 0;
                }
            }
        }

        if(m10 > 0 and valor >= 10){
            int temp = valor/10;
            if(temp > 0){
                if(m10 > temp){
                    valor -= temp*10;
                    m10 -= temp;
                } else {
                    valor -= m10*10;
                    m10 = 0;
                }
            }
        }

        if(m5 > 0 and valor >= 5){
            int temp = valor/0.05;
            if(temp > 0){
                if(m5 > temp){
                    valor -= temp*5;
                    m5 -= temp;
                } else {
                    valor -= m5*5;
                    m5 = 0;
                }
            }
        } 

        if(m1 > 0 and valor >= 1){
            int temp = valor/1;
            if(temp > 0){
                if(m1 > temp){
                    valor -= temp;
                    m1 -= temp;
                } else {
                    valor -= m1;
                    m1 = 0;
                }
            }
        }

        printf("valor: %d\n", valor);
        if(valor == 0){
            tt++;
            mg = m25+m10+m5+m1;
        } else {
            break;
        }
    }

    printf("%d\n", tt);
    printf("%d\n", mg);

    return 0;
}