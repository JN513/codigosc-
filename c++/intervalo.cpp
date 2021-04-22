#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, q;

vector <int> v;

int main(void){
    cin >> n;

    for(int i = 0, a; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }

    cin >> q;

    for(int i = 0; i < q; i++){
        char c;
        int a, b;

        cin >> c;
        cin >> a >> b;

        if(c == 'I'){
            auto it = v.begin();
            v.insert(it+a, b);
        }
        if(c == 'S'){
            int s = 0;
            for(int j = a-1; j < b; j++){
                s += v[j];
            }

            cout << s << nl;
        }
    }

    return 0;
}