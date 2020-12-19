#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;
vector <string> texts, r;

void encript(string s){
    string temp;

    for(int i = 0; i < s.size(); i++){
        if ((s[i] >= 65 and s[i] <= 90) or (s[i] >= 97 and s[i] <= 122)) temp += (char)s[i]+3;
        else temp += s[i];
    }

    s = "";

    for(int i = temp.size()-1; i >= 0; i--){
        s += temp[i];
    }
    temp = "";

    for(int i = 0; i < s.size(); i++){
        if(i >= s.size()/2) temp += (char)s[i]-1;
        else temp += s[i];
    }

    r.push_back(temp);
}

int main(void){
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        texts.push_back(s);
    }

    for(int i = 0; i < texts.size(); i++) encript(texts[i]);

    for(int i = 0; i < n; i++) cout << r[i] << endl;

    return 0;
}