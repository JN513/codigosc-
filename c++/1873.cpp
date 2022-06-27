#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;
map<string, int> nomes;

int get_result(int a, int b){
    // a ganha
    if(a == 3 and b == 2) return 1;
    if(a == 2 and b == 1) return 1;
    if(a == 1 and b == 4) return 1;
    if(a == 4 and b == 5) return 1;
    if(a == 5 and b == 3) return 1;
    if(a == 3 and b == 4) return 1;
    if(a == 4 and b == 2) return 1;
    if(a == 2 and b == 5) return 1;
    if(a == 5 and b == 1) return 1;
    if(a == 1 and b == 3) return 1;
    // b ganha
    if(a == 2 and b == 3) return 2;
    if(a == 1 and b == 2) return 2;
    if(a == 4 and b == 1) return 2;
    if(a == 5 and b == 4) return 2;
    if(a == 3 and b == 5) return 2;
    if(a == 4 and b == 3) return 2;
    if(a == 2 and b == 4) return 2;
    if(a == 5 and b == 2) return 2;
    if(a == 1 and b == 5) return 2;
    if(a == 3 and b == 1) return 2;

    return 0;
}

int main(void){
    nomes["pedra"] = 1;
    nomes["papel"] = 2;
    nomes["tesoura"] = 3;
    nomes["lagarto"] = 4;
    nomes["spock"] = 5;

    cin >> n;

    for(int i = 0; i < n; i++){
        string a, b;

        cin >> a >> b;

        int c, d;

        c = nomes[a];
        d = nomes[b];

        int r = get_result(c, d);

        if(r == 1){
            cout << "rajesh\n";
        } else if(r == 2){
            cout << "sheldon\n";
        } else {
            cout << "empate\n";
        }
    }

    return 0;
}