#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, g, t = 0;

    cin >> n >> g;

    map<char, int> m;

    for(int i = 0; i < n; i++){
        char c;
        int x;

        cin >> c >> x;

        m[c] = x;
    }

    int x;

    cin >> x;

    for(int i = 0; i < x; i++){
        char c;

        cin >> c;

        t += m[c];
    }

    if(t < g){
        cout << t << "\nMy precioooous\n";
    } else {
        cout << t << "\nYou shall pass!\n";
    }

    return 0;
}