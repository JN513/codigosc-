#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int a, b, c, d, e ,f;

    cin >> a >> b >> c >> d >> e >> f;

    if(a+b+c+f >= d+e) cout << "Middle-earth is safe.\n";
    else cout << "Sauron has returned.\n";

    return 0;
}