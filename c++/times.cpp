#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m;
vector<pair<string, int>> v;

vector<string> t[1002];

int main(void){
    cin >> n >> m;

    for(int i =0; i < n; i++){
        string s;
        int x;

        cin >> s >> x;
        v.push_back({s,x});
    }

    sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b){
        return a.second > b.second;
    });

    int time = 0;

    for(int i = 0; i < v.size(); i++){
        t[time].push_back(v[i].first);
        time ++;
        if(time == m) time = 0;
    }

    for(int i = 0; i < m; i++){
        cout << "Time "<<i+1 << nl;
        sort(t[i].begin(), t[i].end());
        for(string s: t[i])cout << s << nl;
        cout << nl;
    }

    return 0;
}