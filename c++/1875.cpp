#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int get_pt(char a, char b){
    // anti horario
    if(a == 'B' and b == 'G') return 1;
    if(a == 'G' and b == 'R') return 1;
    if(a == 'R' and b == 'B') return 1;
    // horario
    if(a == 'B' and b == 'R') return 2;
    if(a == 'R' and b == 'G') return 2;
    if(a == 'G' and b == 'B') return 2;
}

int main(void){
    int x;

    cin >> x;

    for(int k = 0; k < x; k++){
        int n;
        cin >> n;

        pair<int, string> pts[3];
        pts[0].first = 0; pts[0].second = "red";
        pts[1].first = 0; pts[1].second = "green";
        pts[2].first = 0; pts[2].second = "blue";

        for(int i = 0; i < n; i++){
            char a, b;

            cin >> a >> b;

            int pt = get_pt(a, b);

            if(a == 'R') pts[0].first += pt;
            if(a == 'G') pts[1].first += pt;
            if(a == 'B') pts[2].first += pt;
        }

        sort(pts, pts+3, [](pair<int, string> a, pair<int, string> b){
            return a.first > b.first;
        });

        if(pts[0].first > pts[1].first) cout << pts[0].second << endl;
        else if(pts[1].first > pts[2].first) cout << "empate\n";
        else cout << "trempate\n";
    }

    return 0;
}