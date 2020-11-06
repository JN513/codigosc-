#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    if(n%4 == 0) cout << "S\n";
    else cout << "N\n";
    if(n%9 == 0) cout << "S\n";
    else cout << "N\n";
    if(n%25 == 0) cout << "S\n";
    else cout << "N\n";

    return 0;
}