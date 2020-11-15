#include <bits/stdc++.h>

using namespace std;

int n, l, c, r;
vector <string> m;

string v[20];

void procura_palavra(string s){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if(j >= s.size() - 1){

            }
            if (j <= c - s.size()){

            }

            if(i >= s.size() - 1){

            }

            if(i <= l - s.size()){
                
            }
        }
    }
}

int main(void){

    cin >> l >> c;

    for(int i = 0; i < l; i++){
        string s;
        cin >> s;
        m.push_back(s);
    }

    cin >> n;

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n; i++) procura_palavra(v[i]);

    cout << r << endl;

    return 0;
}