#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;

pair <int, pair<float, float>> prec[11];

int main(void){
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        float x;
        prec[i].first = i+1;
        scanf("%f", &x);

        if(i+1 == 1){
            prec[i].second.first = x;
            prec[i].second.second = x;
        } else {
            prec[i].second.first = x/(i+1);
            prec[i].second.second = x;
        }
    }

    sort(prec, prec+n, [](pair <int, pair<float, float>> a, pair <int, pair<float, float>> b){
        return a.second.first < b.second.first;
    });

    float ans = 0;

    int i = 0;

    while(n > 0){
        if(prec[i].first > n){
            i++;
            continue;
        }

        int x = n/prec[i].first;

        n -= x*prec[i].first;
        ans += x*prec[i].second.second;

        i++;
    }

    printf("%.2f\n", ans);

    return 0;
}