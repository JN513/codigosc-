#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(a*b > c*d){
        cout << "-1\n";
    }else if(a*b < c*d){
        cout << "1\n";
    }else{
        cout << "0\n";
    }

    return 0;
}