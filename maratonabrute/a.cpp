#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, x;
string s;
int p, m, g;
int v[300002];
vector <int> mura;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> x;

    cin >> s;

    cin >> p >> m >> g;

    for(int i = 0; i < n; i++){
        if(s[i] == 'P') v[i] = p;
        else if(s[i] == 'M') v[i] = m;
        else v[i] = g;
    }

    for(int i = 0; i < n; i++){
        if(mura.size() == 0){
            mura.push_back(x);
        }

        int id = 0;

        while(true){
            if(v[i] <= mura[id]){
                mura[id] -= v[i];
                break;
            } else {
                id++;
                if(id == mura.size()){
                    mura.push_back(x);
                }
            }
        }
    }

    cout << mura.size() << nl;

    return 0;
}