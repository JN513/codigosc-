#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    vector <int> v;

    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    for(int i = 0; i < n; i++){
        cout << "resposta " << i+1 << ": " << v[i] << nl;
    }


    return 0;
}