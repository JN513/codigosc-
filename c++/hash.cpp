#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, x = 0, r = 0;
        cin >> a;

        for(int j = 0; j < a; j++){
            string s;
            cin >> s;
            int y = 0;
            for(int k = 0; k < s.size(); k++){
                int w = s[k]-'A';
                y += k+ x+ w;
                //cout << "a: " << w << " " << x << " " << k  << " " << s[i]<< nl;
            }
            r+= y;
            x++;
        }

        cout << r << nl; 
    }

    return 0;
}