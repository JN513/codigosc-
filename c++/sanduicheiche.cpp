#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    string line;

    while(getline(cin, line)){
        if (line == "") break;

        int pos = line.size();

        string substr = "";
        for(int i = line.size()-1; i >= 0; i--){
            substr += line[i];

            bool t = true;
            int cont = 0;

            for(int j = line.size()-substr.size()-1; j >= line.size()-substr.size()-substr.size() and j > -1; j--){

                if(line[j] == substr[cont]){
                    cont ++;
                }else{
                    t = false;
                    break;
                }
            }
            if(t == true) {
                pos = line.size()-cont;
                break;
            }
        }

        for(int i = 0; i < pos; i++) cout << line[i];
        cout << nl;
    }

    return 0;
}