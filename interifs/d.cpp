#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int solve(int n, int p) {
    if(n == 1) {
        return p;
    }

    if(n%2 == 0){
        p++;
        return solve(n/2, p);
    }

    p++;
    return solve(n*3+1, p);
    
}

int main(void){
    int n;

    while(cin >> n) {
        cout << solve(n, 0) << endl;
    }

    return 0;
}
