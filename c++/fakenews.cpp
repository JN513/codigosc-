#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;

vector <string> v;

bool compara(string a, string b){
    if( a.size() > b.size()) return false;
    string c = b.substr(0, a.size());

    return a == c;
}

int find(string a){
    int r = 0;
    for(int i = 0; i < v.size(); i++){
        if(compara(a, v[i])) r++;
    }

    return r;
}

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;

        if(a == "add"){
            v.push_back(b);
        }else{
            cout << find(b) << nl;
        }
    }

    return 0;
}