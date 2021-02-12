#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;
    set<int> alu;

    cin >> n;

    for(int i = 0, a; i < n; i++){
        cin >> a;
        alu.insert(a);
    }

    cout << alu.size() << nl;

    return 0;
}