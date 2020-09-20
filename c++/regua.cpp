#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    if(b-c >= a || c-b >= a) cout << "EH SUFICIENTE\n";
    else cout <<"NAO EH SUFICIENTE\n";

    return 0;
}