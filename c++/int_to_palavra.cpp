#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

string get_extense_name(int n){
    string s = to_string(n);

    map<string, string> unit = {
        {"0","zero"},{"1","one"},{"2","two"},{"3","three"},{"4","four"},{"5","five"},{"6","six"},{"7","seven"},{"8","eight"},
        {"9","nine"},{"10","ten"},{"11","eleven"},{"12","twelve"},{"13","thirteen"},{"14","fourteen"},{"15","fifteen"},{"16","sixteen"},
        {"17","seventeen"},{"18","eighteen"},{"19","nineteen"}
    };
    map<char, string> deze = {
        {'2',"twenty"},{'3',"thirty"},{'4',"forty"},{'5',"fifty"},
        {'6',"sixty"},{'7',"seventy"},{'8',"eighty"},{'9',"ninety"}
    };

    if(s == "100"){
        return "one hundred";
    }

    if(s.size() == 2){
        string r;

        if(s[0] == '1'){
            return unit[s];
        } else {
            r += deze[s[0]];
            if(s[1] != '0'){
                string x;
                x += s[1];
                r+= " ";
                r += unit[x];
            }
            return r;
        }
    } else {
        return unit[s];
    }
}

int main(void){
    for(int i = 0; i <= 100; i++){
        cout << get_extense_name(i) << endl;
    }

    return 0;
}