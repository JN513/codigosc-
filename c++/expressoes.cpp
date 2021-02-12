#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;

bool verifica_expressao(string x){
    stack<char> pilha;

    for(int i = 0; i < x.size(); i++){
        if(x[i] == '(') pilha.push('(');
        else if(x[i] == '[') pilha.push('[');
        else if(x[i] == '{') pilha.push('{');
        else if (x[i] == ')'){
            if(pilha.empty()) return false;
            char top = pilha.top();
            if(top != '(') return false;
            else pilha.pop();
        }
        else if (x[i] == ']'){
            if(pilha.empty()) return false;
            char top = pilha.top();
            if(top != '[') return false;
            else pilha.pop();
        }
        else if (x[i] == '}'){
            if(pilha.empty()) return false;
            char top = pilha.top();
            if(top != '{') return false;
            else pilha.pop();
        }
    }

    if(!pilha.empty()) return false;

    return true;
}

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(verifica_expressao(s)) cout << "S" << nl;
        else cout << "N" << nl;
    }

    return 0;
}