#include <bits/stdc++.h>

using namespace std;

int n;
vector<string> v;
vector<int> r;

int caca_start(int i, string x){
    int z = 0;
    for(i; i < x.size()-4; i++) if(x[i] == 'S' and x[i+1] == 'T' and x[i+2] == 'A' and x[i+3] == 'R' and x[i+4] == 'T') z++;
    return z;
}

int conta(string x){
    int j = 0;
    for(int i = 0; i < x.size()-3; i++){
        if(x[i] == 'K' and x[i+1] == 'I' and x[i+2] == 'C' and x[i+3] == 'K'){
            j += caca_start(i+4, x);
        }
    }

    return j;
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < n; i++) r.push_back(conta(v[i]));

    for(int i = 0; i < n; i++) cout << "Case #"<<i<<": "<<r[i]<<endl;

    return 0;
}