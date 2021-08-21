#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    cin >> n;

    char arr[n+1];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n, [](char c, char d){
        if((c == 'J' or d == 'J') and (c == 'O' or d == 'O')){
            return c < d;
        } else if((c == 'J' or d == 'J') and (c == 'I' or d == 'I')){
            c > d;
        } else if((c == 'O' or d == 'O') and (c == 'I' or d == 'I')){
            c > d;
        } else {
            return c < d;
        }

    });

    cout << arr << nl;


    return 0;
}

