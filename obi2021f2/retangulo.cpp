#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, t;
    ll v[100005];

    cin >> n;

    int temp = 0;
    v[0] = 0;

    for(int i = 1; i < n+1; i++){
        int a;
        cin >> a;

        temp += a;

        v[i] = temp;
    }

    t = v[n];

    for(int i = 0; i < n+1; i++){
        cout << v[i] << " ";
    }

    cout << endl;


    return 0;
}