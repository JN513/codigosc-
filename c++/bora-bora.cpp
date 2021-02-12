#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int p, m, n;

int main(void){

    while(cin >> p >> m >> n && (p+m+n)){
        vector<pair<int,char>> jo[11];
        stack<pair<int,char>> saque;
        stack<pair<int,char>> descarte;

        int x; char c;

        for(int i = 0; i < p; i++){
            for(int j = 0; j < m; j++){
                cin >> x >> c;

                jo[i].push_back({x,c});
            }
            sort(jo[i].begin(), jo[i].end(),[](pair<int,char> a, pair<int,char> b){
                if(a.first != b.first) return a.first > b.first;
                else return a.second > b.second;
            });
        }

        for(int i = p*m; i < n-1; i++){
            int x; char c;

            cin >> x >> c;

            saque.push({x,c});
        }

        cin >> x >> c;

        descarte.push({x,c});

        int lado = 1;

        cout << nl << nl << "Ola" << nl << nl;

        for(int i = 0; i < p; i+=lado){
            if(jo[i].size() == 0) {
                cout << i+1 << nl;
                break;
            }
            for(int j = 0; j < jo[i].size(); j++){
                if(jo[i][j].first == descarte.top().first or jo[i][j].second == descarte.top().second){
                    descarte.push(jo[i][j]);
                    int first = jo[i][j].first;
                    jo[i].erase(jo[i].begin()+j);
                    if(first == 12) lado = lado * -1;
                    else if(first == 11) {
                        i++;
                    }
                    else if(first == 7){
                        i++;
                        jo[i].push_back(saque.top());
                        saque.pop();
                        jo[i].push_back(saque.top());
                        saque.pop();
                        sort(jo[i].begin(), jo[i].end(),[](pair<int,char> a, pair<int,char> b){
                            if(a.first != b.first) return a.first > b.first;
                            else return a.second > b.second;
                        });
                    }
                    else if(first == 1){
                        i++;
                        jo[i].push_back(saque.top());
                        saque.pop();
                        sort(jo[i].begin(), jo[i].end(),[](pair<int,char> a, pair<int,char> b){
                            if(a.first != b.first) return a.first > b.first;
                            else return a.second > b.second;
                        });
                    }

                    break;
                }
            }
        }

    }

    return 0;
}