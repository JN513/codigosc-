#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, k;

    pair <int, int> v[100002];

    cin >> n >> k;

    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second ;

    sort(v,v+n,[](pair<int, int> a, pair<int,int> b){
        return a.first % a.second < b.first % b.second;
    });

    cout << v[k-1].first % v[k-1].second << endl;

    return 0;
}