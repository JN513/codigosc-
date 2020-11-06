#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> im, pa;

    for (int i = 0; i < 10; i++){
        int a;
        cin >> a;
        if(a%2 == 0) pa.push_back(a);
        else im.push_back(a);
    }

    for (int i = 0; i < pa.size(); i++) cout << pa[i] <<" ";
    cout << endl;
    for (int i = 0; i < im.size(); i++) cout << im[i] <<" ";
    cout << endl;

    return 0;
}