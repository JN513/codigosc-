#include <bits/stdc++.h>

using namespace std;

int main(void){
    string a, b, c;

    cin >> a >> b >> c;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == '7'){
            a[i] = '0';
        }
    }

    for(int i = 0; i < c.size(); i++){
        if(c[i] == '7'){
            c[i] = '0';
        }
    }

    int n1 = stoi(a);
    int n2 = stoi(c);
    int nr;

    if(b[0] == '+'){
        nr = n1 + n2;
    } else if(b[0] == '-'){
        nr = n1 - n2;
    }  else if(b[0] == 'x'){
        nr = n1 * n2;
    }  else if(b[0] == '/'){
        nr = n1 / n2;
    }

    string r = to_string(nr);

    for(int i = 0; i < r.size(); i++){
        if(r[i] == '7'){
            r[i] = '0';
        }
    }

    cout << stoi(r) << endl;

    return 0;
}