#include <bits/stdc++.h>

using namespace std;

int v[500005], n, r;
long long k;

int main(){
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    int temp = 0;
    for (int i = 0; i < n; i++) {

        if (temp+v[i] <= k) {
            if (temp+v[i] == k) {
                r++;
            }
            temp+=v[i];
        }
        else{
            temp = 0;
        }
    }

    printf("%d\n", r);

    return 0;
}
