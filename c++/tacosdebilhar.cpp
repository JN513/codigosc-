#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, r = 0;

    cin >> n;

    set<int> tacos;

    for(int i = 0, a; i < n; i++){
        cin >> a;
        if(tacos.count(a)) tacos.erase(a);
        else tacos.insert(a), r+= 2;
    }

    cout << r << nl;

    return 0;
}