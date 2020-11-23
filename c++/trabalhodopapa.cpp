#include <bits/stdc++.h>

using namespace std;

int n;

int dp[1002];
pair <int, int> caixas[1002];

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++)cin >> caixas[i].first >> caixas[i].second;

    sort(caixas, caixas+n, [](pair<int,int> a, pair<int,int> b){
        return a.second-a.first > b.second-b.first;
    });

    cout <<endl;

    for(int i = 0; i < n; i++)cout << caixas[i].first << " " << caixas[i].second<< endl;

    return 0;
}