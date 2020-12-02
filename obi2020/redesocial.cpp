#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, r = 0, temp = 0;

    vector <int> v, t;
    t.push_back(0);

    cin >> n;

    for(int i = 0, a; i < n; i++){
        cin >> a;
        v.push_back(a);
        if(a > temp) temp = a;
    }

    for(int i = temp; i > 0; i --){
        int y = 0+t[t.size()-1];
        for (int j = 0; j < v.size(); j++){
            if(v[j] >= i){
                y++;
                v.erase(v.begin()+j);
                j--;
            }
        }
        if(y >= i){
            cout << i << nl;
            break;
        }
        else{
            t.push_back(y);
        }
    }

    return 0;
}