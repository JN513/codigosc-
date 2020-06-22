#include <bits/stdc++.h>

using namespace std;

int main()
{
    int valorj, sobra, novovalor =0;
    scanf("%i", &valorj);

    for (int j = 0; j < 6; j++) {
        sobra = valorj - ((valorj  / 10) * 10);

        valorj = valorj/10;
        novovalor += sobra * pow(2,j);
    }
    printf("decimal: %i \n", novovalor);

    return 0;
}
