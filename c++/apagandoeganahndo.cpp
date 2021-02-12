#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m;

int main(void){
    while (cin >> n >> m && n+m){
        char digito;
        int rm = 0;
        stack<int> pilha;
        vector<int> v;
        for(int i = 0; i < n; i++){
            cin >> digito;

            int num = digito - 48;

            while (!pilha.empty() && rm < m && pilha.top() < ((int)digito - 48)){
                pilha.pop();
                rm++;
            }

            pilha.push(((int)digito - 48));
        }

        if(rm < m) for(int i = 0; i < (m-rm); i++) pilha.pop();

        for(int i = 0; i < (n-m); i++){
            v.push_back(pilha.top());
            pilha.pop();
        }

        for(int i = n-m-1; i > -1; i--) cout << v[i];

        cout << nl;
    }
    
    return 0;
}