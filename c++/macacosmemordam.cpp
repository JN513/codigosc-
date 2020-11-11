#include <bits/stdc++.h>

using namespace std;

int n, r;
pair<int, int> v[300005];

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if (v[j-1].second - v[j].second == 1 or v[j].second - v[j-1].second == 1) continue;
            else{
                i = j-1;
                r++;
            }
        }
    }

    cout << r<< endl;

    return 0;
}