#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, t, v1[100005], v2[100005];

int main(void){
    cin >> n >> t;

    for(int i = 0; i < n; i++) cin >> v1[i];

    for(int i = 0; i < n; i++) cin >> v2[i];

    for(int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;

        for(int j = a-1; j < b; j++){
            int temp = v1[j];
            v1[j] = v2[j];
            v2[j] = temp;
        }
    }

    for(int i = 0; i < n; i++) cout << v1[i] << " ";
    cout << nl;

    return 0;
}