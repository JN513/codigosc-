#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

string encript(string s){

    for(int i = 0; i < (int)s.size(); i++){
        if((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z')){
            s[i] += 3;
        }
    }

    string temp = "";

    for(int i = (int)s.size()-1; i >= 0; i--){
        temp += s[i];
    }

    for(int i = (int)temp.size()/2; i < (int)temp.size(); i++){
        temp[i]--;
    }

    return temp;
}

int main(void){
    int n;

    cin >> n;

    cin.ignore();

    string s;

    for(int i = 0; i < n; i++){
        getline(cin, s);

        cout << encript(s) << endl;
    }

    return 0;
}