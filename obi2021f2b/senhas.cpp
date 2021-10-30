#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m, k, p;
string senha;
vector <string> en;
vector <string> pre;
vector <string> comb;

void combinations(int pos, string s) {
    if (pos == m) {
        comb.push_back(s);
    } else {
        for (int i = 0; i < k; i++) {
            combinations(pos + 1, s + en[pos][i]);
        }
    }
}

int main(void){
    cin.sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector <int> posis;

    cin >> n >> m >> k;

    cin >> senha;

    for(int i = 0; i < senha.size(); i++) {
        if(senha[i] == '#') {
            posis.push_back(i);
        }
    }

    for(int i = 0; i < m; i++){
        string s;

        cin >> s;

        en.push_back(s);
    }

    cin >> p;

    string temp;

    for(char c : en[0]){
        temp += c;
        combinations(1, temp);
        temp = "";
    }

    for(int k = 0; k < comb.size(); k++){
        temp = senha;
        int it = 0;
        for(int i = 0; i < (int)posis.size(); i++){
            temp[posis[i]] = comb[k][it];
            it++;
        }

        pre.push_back(temp);
    }

    // saida

    sort(pre.begin(), pre.end());

    cout << pre[p-1] << nl;

    return 0;
}