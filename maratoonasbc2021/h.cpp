#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define pii pair<int,int>
#define pb push_back
#define mp make_pair

using namespace std;

int n, k;

vector <pii> v;

bool sort_p(vector <pii> a){
    int pos_A, pos_B;

    for(int i = 0; i < n; i++){
        pos_A = a[i].first;
        for(int j = i+1; j < n; j++){
            if(a[i].second == a[j].second){
                if(a[i].first > a[j].first){
                    pos_B = a[j].first;
                    a[j].first = pos_A;
                    a[i].first = pos_B;
                }
            }
        }
    }
    pos_A = a[0].first;

    for(int i = 1; i < n; i++){
        if(a[i].first >= pos_A){
            pos_A = a[i].first;
        } else {
            return false;
        }
    }

    return true;
}

int main(void){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.pb(mp(a, b));
    }

    if(sort_p(v)){
        cout << "Y" << nl;
    } else {
        cout << "N" << nl;
    }

    return 0;
}