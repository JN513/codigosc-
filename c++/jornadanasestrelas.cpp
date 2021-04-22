#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, r;
int v[1000005], vi[1000006];

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        r += v[i];
    }

    int i = 0, o = 0;

    while(true){
        if(v[i] == 0) break;
        if(vi[i] == 0) {
            o++;
            vi[i] = 1;
        }
        if(v[i] %2 == 0){
            if(v[i] > 0) {
                v[i]--;
                r--;
            }
            i--;
            if(i < 0 or i >= n) break;
        }else{
            if(v[i] > 0) {
                v[i]--;
                r--;
            }
            i++;
            if(i < 0 or i >= n) break;
        }
    }

    cout << o << " " << r << nl;

    return 0;
}