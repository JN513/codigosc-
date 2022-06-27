#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    while(cin >> n and n){
        double x = 0, r = 12;

        for(int i = 0; i < n; i++){
            cin >> x;

            if(x < r) r  = x;
        }

        printf("%.2lf\n", r);
    }

    return 0;
}