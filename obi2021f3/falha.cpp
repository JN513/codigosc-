#include <bits/stdc++.h>

#define nl endl

using namespace std;

int n, r = 0;

vector <string> v;

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;

        cin >> s;

        v.push_back(s);
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(i == j) continue;

            if(v[i] == v[j]){
                ans += 2;
            } else {
                if(v[i].find(v[j]) != string::npos){
                    ans++;
                }

                if(v[j].find(v[i]) != string::npos){
                    ans++;
                }
            }
        }

        r += ans;
        ans = 0;
    }

    cout << r << nl;

    return 0;
}