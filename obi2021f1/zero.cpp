#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;

int main(void){
    stack <int> pilha;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        if(a != 0) pilha.push(a);
        else pilha.pop();
    }

    int r = 0;

    while(!pilha.empty()){
        r += pilha.top();
        pilha.pop();
    }

    cout << r << nl;


    return 0;
}