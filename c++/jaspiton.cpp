#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int t, n, m;

int main(void){

    cin >> t;

    for(int k = 0; k < t; k++){
        cin >> n >> m;

        map <string, string> traducoes;

        for(int i = 0; i < n; i++){
            string a, b;
            cin.clear();
            getline(cin, a);
            cin.clear();
            getline(cin, b);

            traducoes[a] = b;
        }

        for(int i = 0; i < m; i++){
            string line;

            cin.clear();

            getline(cin, line);

            cin.ignore();

            string resul = "", token;

            istringstream tokenizer { line };

            while (getline(tokenizer, token, ' '))
                resul += traducoes[token];

            cout << resul << nl;
        }

        cout << nl;
    }

    return 0;
}