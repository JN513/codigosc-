#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    pair <int,int> a[3];

    for(int i = 0; i < 3; i++){
        int d;
        cin >> d;
        a[i] = {d, i};
    }

    sort(a, a+3, [](pair <int,int> b, pair <int,int> c){
        return b.first < c.first;
    });

    if(a[1].second == 0){
        cout << "huguinho\n";
    }
    if(a[1].second == 1){
        cout << "zezinho\n";
    }
    if(a[1].second == 2){
        cout << "luisinho\n";
    }

    return 0;
}