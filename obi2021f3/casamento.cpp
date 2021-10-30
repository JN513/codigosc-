#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

string a, b;

int main(void){
    cin >> a >> b;

    int lenA = a.size();
    int lenB = b.size();

    if(lenA != lenB){
        if(lenA > lenB){
            int dif = lenA - lenB;

            for(int i = 0; i < dif; i++){
                b.insert(0, "0");
            }
        } else {
            int dif = lenB - lenA;

            for(int i = 0; i < dif; i++){
                a.insert(0, "0");
            }
        }
    }

    string v[2] = {"", ""};

    int flen = a.size();

    for(int i = 0; i < flen; i++){
        int ai = a[i] - '0';
        int bi = b[i] - '0';

        if(ai > bi){
            v[0] += to_string(ai);
        } else if(ai < bi){
            v[1] += to_string(bi);
        } else {
            v[0] += to_string(ai);
            v[1] += to_string(bi);
        }
    }

    if(v[0].size() == 0){
        v[0] = "-1";
    }

    if(v[1].size() == 0){
        v[1] = "-1";
    }

    int v0 = stoi(v[0]);
    int v1 = stoi(v[1]);

    if(v1 > v0){
        cout << v0 << " " << v1 << nl;
    } else {
        cout << v1 << " " << v0 << nl;
    }

    return 0;
}