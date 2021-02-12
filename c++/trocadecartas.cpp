#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, m, r = 0;
    set<int> a, b;

    cin >> n >> m;

    for(int i = 0, x; i < n; i++){
        cin >> x;
        a.insert(x);
    }

    for(int i = 0, x; i < m; i++){
        cin >> x;
        b.insert(x);
    }

    if(a.size() > b.size()){
        for (set<int>::iterator it=b.begin(); it!=b.end(); ++it){
            int t = a.size();
            a.insert(*it);
            if(a.size() > t) r++;
        }
    }
    else {
        for (set<int>::iterator it=a.begin(); it!=a.end(); ++it){
            int t = b.size();
            b.insert(*it);
            if(b.size() > t) r++;
        }
    }

    cout << r << nl;

    return 0;
}