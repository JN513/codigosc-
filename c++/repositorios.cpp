#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, m;

    cin >> n >> m;

    map <int, int> softs;
    map <int, int> res;

    for(int i = 0, a, b; i < n; i++){
        cin >> a >> b;
        softs[a] = b;
    }

    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b;

        if(softs.find(a) != softs.end()){
            if(softs[a] < b) res[a] = max(b, res[a]);
        }
        else res[a] = b;
    }

    for (map<int,int>::iterator it=res.begin(); it!=res.end(); ++it){
        cout << it->first<< " "<< it->second<< "\n";
    }

    return 0;
}