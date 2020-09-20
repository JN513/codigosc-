#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if(b != c) cout<<"N\n";
    else if(b+c != d) cout<<"N\n";
    else if(b+c+d != a) cout<<"N\n";
    else cout<<"S\n";

    return 0;
}