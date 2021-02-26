#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int r;

vector <int> ans;

int main(void){
    cin >> r;

    for(int i = 0; i < r; i++){
        int n, aux;
        ll s;
        vector <ll> v;

        cin >> n;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }

        cin >> s;

        int de = 0, ate = n - 1;
        while (de <= ate){
            int meio = (de + ate) / 2;

            if (s > v[meio])
                de = meio + 1;
            else if (s < v[meio])
                ate = meio - 1;
            else{
                ans.push_back(meio + 1);
                break;
            }
        }
    }

    for(int i = ans.size()-1; i >= 0; i--) cout << ans[i] << " ";

    cout << nl;

    return 0;
}