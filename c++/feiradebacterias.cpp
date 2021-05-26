#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;
int r;

double temp;

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        int d, c;
        cin >> d >> c;

        double bac = (double)c * log(d);

        if(bac > temp){
            temp = bac;
            r = i;
        }
    }

    cout << r << nl;

    return 0;
}

1907, 3058, 3052, 3051, 3048, 3063, 3056, 2836, 2837, 2831, 2830, 2784, 2787, 2786, 2780, 2429, 2440, 2450, 2455, 2468, 2453, 2428, 2435, 2437