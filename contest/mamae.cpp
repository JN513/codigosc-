#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m;
map <string, string> ar;

int main(void){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;
        ar[b] = a;
    }

    for(int i = 0; i < m; i++){
        string a, b;
        cin >> a >> b;
        if(ar.find(b) == ar.end()) cout << "nao e o Nao e a mamae\n";
        else if(ar[b] != a) cout << "nao e o Nao e a mamae\n";
        else cout << "Nao e a mamae\n";
    }

    return 0;
}