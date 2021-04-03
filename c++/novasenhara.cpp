#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

string get_senha(string x){
    string senha;

    for(int i = 0; i < x.size(); i++){
        if(senha.size() == 12) break;

        if(x[i] == 'G' or x[i] == 'Q' or x[i] == 'a' or x[i] == 'k' or x[i] == 'u')
            senha += "0";
        else if(x[i] == 'I' or x[i] == 'S' or x[i] == 'b' or x[i] == 'l' or x[i] == 'v')
            senha += "1";
        else if(x[i] == 'E' or x[i] == 'O' or x[i] == 'Y' or x[i] == 'c' or x[i] == 'm' or x[i] == 'w')
            senha += "2";
        else if(x[i] == 'F' or x[i] == 'P' or x[i] == 'Z' or x[i] == 'd' or x[i] == 'n' or x[i] == 'x')
            senha += "3";
        else if(x[i] == 'J' or x[i] == 'T' or x[i] == 'e' or x[i] == 'o' or x[i] == 'y')
            senha += "4";
        else if(x[i] == 'D' or x[i] == 'N' or x[i] == 'X' or x[i] == 'f' or x[i] == 'p' or x[i] == 'z')
            senha += "5";
        else if(x[i] == 'A' or x[i] == 'K' or x[i] == 'U' or x[i] == 'g' or x[i] == 'q')
            senha += "6";
        else if(x[i] == 'C' or x[i] == 'M' or x[i] == 'W' or x[i] == 'h' or x[i] == 'r')
            senha += "7";
        else if(x[i] == 'B' or x[i] == 'L' or x[i] == 'V' or x[i] == 'i' or x[i] == 's')
            senha += "8";
        else if(x[i] == 'H' or x[i] == 'R' or x[i] == 'j' or x[i] == 't')
            senha += "9";

    }

    return senha;
}

int main(void){
    int n;

    cin >> n;

    cin.ignore();
    cin.clear();

    for(int i = 0; i < n; i++){
        string line;
        getline(cin, line);

        string r = get_senha(line);

        for(int i = 0; i < 12; i++) cout << r[i];
        cout << nl;
    }

    return 0;
}