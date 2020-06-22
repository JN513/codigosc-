#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a, b,r=0;
        scanf("%d%d", &a, &b);
        while(a%b != 0){
            r++;
            a++;
        }
        printf("%d\n",r);
    }

    return 0;
}
