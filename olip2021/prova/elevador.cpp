#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

struct Elevador{
    int m, v[3];

    char get_response(){
        int qtdp = 0;
        for(int j = 0; j < 3; j++){
            if(v[j] == 1){
                qtdp++;
            }
        }

        if(qtdp > 1) {
            return 'X';
        }

        if(qtdp == 0){
            return '0';
        }

        if(m == 1) {
            return '0';
        }

        return '1';
    } 
};

int main(void){
    int n;
    cin >> n;
    vector <Elevador> w;

    for(int i = 0; i < n; i++){
        Elevador k;

        cin >> k.m >> k.v[0] >> k.v[1] >> k.v[2];

        w.push_back(k);
    }

    for( Elevador a : w){
        cout << a.get_response() << nl;
    }

    return 0;
}