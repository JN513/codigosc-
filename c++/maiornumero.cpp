#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    vector <int> v;

    cin >> n;

    while(n > 0){
        v.push_back(n);
        cin >> n;
    }

    sort(v.begin(),v.end(),[](int a, int b){
        return a > b;
    });

    cout << v[0] << endl;

    return 0;
}