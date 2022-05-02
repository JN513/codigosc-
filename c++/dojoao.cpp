#include <bits/stdc++.h>

using namespace std;

int main(void){
    set <int> v;

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(v.find(x) != v.end()){
            v.erase(x);
            v.insert(2*x);
        } else {
            v.insert(x);
        }
    }


    for(int i : v){
        cout << i << endl;
    }

    return 0;
}