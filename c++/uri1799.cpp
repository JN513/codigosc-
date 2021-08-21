#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define NMAX 5005

using namespace std;

int n, m;

vector <int> grafo[NMAX];

int main(void){
    map <string, int> mapa;

    cin >> n >> m;

    int co = 0;

    for(int i = 0; i < m; i++){
        string s1, s2;
        int s1_int, s2_int;

        cin >> s1, s2;

        if(mapa.find(s1) == mapa.end()){
            s1_int = co;
            co++;
            mapa[s1] = s1_int
        } else {
            s1_int = mapa[s1];
        }

        if(mapa.find(s2) == mapa.end()){
            s2_int = co;
            co++;
            mapa[s2] = s2_int
        } else {
            s1_int = mapa[s1];
        }



    }


    return 0;
}