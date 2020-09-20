#include <bits/stdc++.h>

using namespace std;

vector <int> r;

int main(){
    int x, y;

    cin >> x >> y;

    while (x != 0 && y != 0){
        int m[105][105], v[105], s;

        for(int i = 0; i < x; i++)
            for (int j = 0; j < y; j++) cin >> m[i][j];

        cin >> s;
        for(int i = 0; i < s; i++){
            int w;
            cin >> w;
            for (int j = 0; j < w; j++){
                int pon;
                cin >> pon;
                for (int k = 0; k < x; k++) v[m[k][j]] += pon;
            }
            int a = 0;
            for (int i = 1; i <= y; i++) 
            if(v[i] > a) {
                a = v[i];
                r.clear();
                r.push_back(i);
            }
            else if(v[i] == a) r.push_back(i);

            sort(r.begin(), r.end());

            for (int i = 0; i < r.size(); i++) cout << r[i]<<" ";
            cout <<endl;
            r.clear();
            for(int i = 0; i <= y+1; i++) v[i] = 0;
        }

        cin >> x >> y;
    }
    

    return 0;
}