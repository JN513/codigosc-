#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, sa;
    vector<int> en;

    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        en.push_back(a);
    }

    cin >> sa;

    set<int> removidos;

    for(int i = 0; i < sa; i++){
        int a;
        cin >> a;
        removidos.insert(a);
    }

    for(int i : en){
        if(removidos.find(i) == removidos.end()) cout << i << " ";
    }

    cout << endl;

    return 0;
}