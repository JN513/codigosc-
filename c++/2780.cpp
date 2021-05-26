#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    cin >> n;

    if(n <= 800){
        cout << "1\n";
    }else if(n <= 1400){
        cout << "2\n";
    }else{
        cout << "3\n";
    }

    return 0;
}