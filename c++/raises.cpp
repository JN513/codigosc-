#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    float x;
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        scanf("%f",&x);
        printf("%0.4f\n",sqrt(x));
    }

    return 0;
}
