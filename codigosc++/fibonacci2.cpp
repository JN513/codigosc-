#include <bits/stdc++.h>

using namespace std;

int fib(long long int a){
    if(a == 1) return 1;
    if(a == 0) return 0;

    return fib(a-1)+fib(a-2);
}

int main(){
    int n;

    cin >> n;

    cout << fib(n+1)<<"\n";

    return 0;
}