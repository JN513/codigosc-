#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    vector <int> cubos;
    vector <int> cubos1;
    vector <int> quadrados;

    int i = 1;

    while (i * i * i < 70){
        cout << i * i * i << nl;
        i++;
        cubos.push_back(i * i * i);
        cubos1.push_back(i * i * i);
    }


    cout << "Cubo" << nl << nl;

    i = 1;

    while (i * i < 70){
        cout << i * i << nl;
        i++;
        quadrados.push_back(i * i);
    }

    for(int x : cubos){
        for(int y : cubos1){
            for(int w : quadrados){
               cout << x << " " << y << " " << w+1 << " " << x*y*(w+1) << nl; 
            }
        }
    }

    return 0;
}