#include <bits/stdc++.h>

using namespace std;

int main(){
    char letras[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    string s[27] = {"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999", "9999", "0"};

    int n;

    scanf("%d", &n);

    for (int x = 0; x < n; x++) {
        string en;
        string r = "";
        scanf("%s",&en);
        for(int i = 0; i < en.size();i++){
            if (en[i] <= 'Z') {
                r += "#";
                for (int j = 0; j < 26; j++) {
                    if(en[i]-('a'- 'A') == letras[j]){
                        if (r[r.size()-1] == s[j][0]) {
                            r+="*";
                            r+=s[j];
                        }
                        else{
                            r+=s[j];
                        }
                    }
                }
            }
            else{
                for (int j = 0; j < 26; j++) {
                    if(en[i] == letras[j]){
                        if (r[r.size()-1] == s[j][0]) {
                            r+="*";
                            r+=s[j];
                        }
                        else{
                            r+=s[j];
                        }
                    }
                }
            }
        }
        printf("%s\n",r);
    }

    return 0;
}
