#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int x, y, z, m, n;

string ord;

vector<int>tamanduas;

bool verifica(int peso){
    for(int i = 0; i < tamanduas.size(); i++) if(tamanduas[i]+peso <= m){
        tamanduas[i] += peso;
        return true;
    }

    return false;
}

int main(void){
    cin >> x >> y >> z >> m >> n;
    cin >> ord;

    tamanduas.push_back(0);

    for(int i = 0; i < ord.size(); i++){
        int last = tamanduas.size()-1;
        if(ord[i] == 'F'){
            if (tamanduas[last] + x <= m) tamanduas[last]+= x;
            else if(verifica(x)) continue;
            else tamanduas.push_back(x);
        }else if(ord[i] == 'A'){
            if (tamanduas[last] + y <= m) tamanduas[last]+= y;
            else if(verifica(y)) continue;
            else tamanduas.push_back(y);
        }else if(ord[i] == 'R'){
            if (tamanduas[last] + z <= m) tamanduas[last]+= z;
            else if(verifica(z)) continue;
            else tamanduas.push_back(z);
        }
    }

    cout << tamanduas.size() << endl;

    return 0;
}