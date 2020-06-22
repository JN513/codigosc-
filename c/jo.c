#include <stdio.h>

int main(){
    int A,B,b,A1,B1,b1;
    const int H = 70;

    scanf("%d",&B);
    scanf("%d",&b);

    b1 = 160 - b;
    B1 = 160 - B;

    A = ((B + b ) / 2) *H;
    A1 = ((B1 + b1) / 2) * H;

    if (A == A1)
        printf("0\n");
    if (A > A1)
        printf("1\n");
    if (A1 > A)
        printf("2\n");

    return 0;
}
