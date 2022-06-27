#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    unsigned long long int n, m;
    string s, x;

    cin >> s >> x;

    while(s != "0" or x != "0"){

        while(s.size() != 1){
            unsigned long long int temp = 0;

            for(unsigned long long int i = 0; i < s.size(); i++){
                temp += s[i] - '0';
            }

            s = to_string(temp);

            //cout << "temp: " << temp << " S: " << s << endl;
        }

        while(x.size() != 1){
            unsigned long long int temp = 0;

            for(unsigned long long int i = 0; i < x.size(); i++){
                temp += x[i] - '0';
            }

            x = to_string(temp);
        }

        n = (int)s[0] - '0';
        m = (int)x[0] - '0';

        if(n > m) cout << 1 << endl;
        else if(m > n) cout << 2 << endl;
        else cout << 0 << endl;

        cin >> s >> x;
    }

    return 0;
}