#include <bits/stdc++.h>

using namespace std;

int main(){
    int v[10004];

    int n, r = 0;

    cin >> n;

    for(int i = 0; i < n;i++) cin >> v[i];

    for(int i = 0; i < n-1; i++){
        if (v[i+2] == 1) {
            r++;
            i += 1;
        }
        else if (v[i+1] == 1) {
            r++;
            //i++;
        }else {
            r=-1;
            break;
        }
    }

    cout << r;

    return 0;
}
