#include <bits/stdc++.h>

using namespace std;

int n, q;

vector<long long int> v, sec;

int main(void){
    cin >> n;

    v.push_back(0);
    for (int i = 0, k, p; i < n; i++){
        cin >> k>>p;
        for (int j = 0; j < k; j++){
            v.push_back(p);
        }
    }

    long long int soma = 0;
    for(int i = 0; i < v.size(); i++){
        soma += v[i];
        sec.push_back(soma);
    }

    cin >> q;

    for (int i = 0, x,y; i < q; i++){
        cin >> x >> y;

        cout << sec[y] - sec[x-1]<< endl;
    }

    return 0;
}