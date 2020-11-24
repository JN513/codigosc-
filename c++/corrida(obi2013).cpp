#include <bits/stdc++.h>

using namespace std;

int main(void){
    int a1, a2;
    float b1,c1 ,b2,c2; 
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    if(b1/c1 < b2/c2) cout << a1 << endl;
    else cout << a2 << endl;

    return 0;
}