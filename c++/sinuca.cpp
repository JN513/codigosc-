#include <bits/stdc++.h>

using namespace std;

int main(void){
    vector<int> v;
    int n;

    cin >> n;

    for (int i = 0, x; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    while (v.size() > 1){
        vector<int> temp;
        for (int i = 0; i < v.size()-1; i++){
            if( v[i] == v[i+1]) temp.push_back(1);
            else temp.push_back(-1);
        }

        v = temp;
    }

    if(v[0] == 1) cout << "preta" <<endl;
    else cout << "branca" <<endl;

    return 0;
}