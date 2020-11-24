#include <bits/stdc++.h>

using namespace std;

int main(void){
    int a, b;

    cin >> a >> b;

    if(b < a) swap(a,b);

    for(int i = a; i <= b; i++) cout << i << " ";

    cout << endl;

    return 0;
}