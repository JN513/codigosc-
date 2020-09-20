#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;

    cin>>a>>b>>c;

    if(a != b and a != c) cout<<"A\n";
    else if(b != a and b != c) cout<<"B\n";
    else if(c != a and c != b) cout<<"C\n";
    else cout<<"*\n";

    return 0;
}