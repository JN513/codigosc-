#include <bits/stdc++.h>

using namespace std;

int main(){
    int l1 = 0, l2 = 0, l3 = 0, x, n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;

        if(x%2 == 0) l1++;
        if(x%3 == 0) l2++;
        if(x%4 == 0) l3++;
    }

    cout << l1 << endl;
    cout << l2 << endl;
    cout << l3 << endl;

    return 0;
}