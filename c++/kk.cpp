#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

bool eh_primo(int x){
    int div = 0;
    for(int i = 1; i <= x/2; i++) {
        if(div > 1) return false;
        if(x % i == 0) div++;
    }

    if(div == 1)return true;
    if(div > 1) return false;
}

int main(void){

    cout << "[";
    for(int i = 0; i < 2000; i++){
        if(eh_primo(i)) cout << i << ", ";
    }

    cout << "]";

    return 0;
}