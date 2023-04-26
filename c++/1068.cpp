#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    string s;

    while(cin >> s){
        stack <char> st;

        for(int i = 0; i < (int)s.size(); i++){
            if(s[i] == '(') st.push(s[i]);
            else if(s[i] == ')'){
                if(st.empty()){
                    cout << "incorrect\n";
                    continue;
                }
                st.pop();
            }
        }

        if(st.empty()){
            cout << "correct\n";
        } else {
            cout << "incorrect\n";
        }
    }

    return 0;
}