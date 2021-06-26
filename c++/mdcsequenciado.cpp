#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int mdc(int num1, int num2){
    if(num1%num2 == 0)
        return num2;
    else
        return mdc(num2, num1%num2);
}

int main(void){
    int n, v[100005];

    cin >> n;

    for(int i = 0; i < n; i++) cin >> v[i];

    int r = v[0];

    for(int i = 1; i < n; i++){
        r = mdc(r, v[i]);
    }

    cout << r << nl;

    return 0;
}