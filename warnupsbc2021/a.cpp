#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int a, b;

    cin >> b >> a;

    int qc = a/(b-1);
    int res = a % (b-1);

    if(res > 0) qc ++;

    cout << qc << nl;

    return 0;
}