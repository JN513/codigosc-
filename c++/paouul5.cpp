#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, r=0;

    for(int i = 0; i < 3; i++){
        cin >> a;
        if(a % 2 == 0 or a%5 == 0)r++;
    }

    cout << r <<endl;

    return 0;
}