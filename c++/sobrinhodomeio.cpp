#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int h, z, l;

    cin >> h >> z >> l;

    pair<int, string> p[3];

    p[0] = make_pair(h, "huguinho");
    p[1] = make_pair(z, "zezinho");
    p[2] = make_pair(l, "luisinho");

    sort(p, p+3, [](pair<int, string> a, pair<int, string> b){
        return a.first < b.first;
    });

    cout << p[1].second << endl;

    return 0;
}