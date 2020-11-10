#include <bits/stdc++.h>

using namespace std;

int n, ant, temp;
vector<int> rs;
vector<string> m;

int main(){
    cin >> n;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        m.push_back(s);
    }

    for (int i = 0; i < n; i++){
        if(ant == 0){
            for(int j = 0; j < m[i].size(); j++){
                if(m[i][j] == 'o') temp++;
                else if(m[i][j] == 'A'){
                    rs.push_back(temp);
                    temp=0;
                }
            }
            ant = 1;
        }
        else{
            for(int j = m[i].size()-1; j >= 0; j--){
                if(m[i][j] == 'o') temp++;
                else if(m[i][j] == 'A'){
                    rs.push_back(temp);
                    temp=0;
                }
            }
            ant = 0;
        }
    }
    rs.push_back(temp);

    sort(rs.begin(), rs.end(), [](int a, int b){ 
        return a > b;
    });

    cout << rs[0] << endl;

    return 0;
}