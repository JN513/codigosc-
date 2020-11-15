#include <bits/stdc++.h>

using namespace std;

int n, x = 100;
vector<int> v;

int main(void){
    cin >> n;

    v.push_back(100);

    for(int i = 0; i < n; i ++){
        int a;
        cin >> a;
        x += a;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), [](int a, int b){
        return a > b;
    });

    cout << v[0]<< endl;

    return 0;
}