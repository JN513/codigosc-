#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, sa;
    set<int> en;

    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        en.insert(a);
    }

    cin >> sa;

    for(int i = 0; i < sa; i++){
        int a;
        cin >> a;
        en.erase(a);
    }

    for (int i = 0; i < en.size(); i++) cout << en[i] << " ";

    cout << endl;

    return 0;
}