#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;

int main(void){
    cin >> n;

    for (int k = 0; k < n; k++){
        string s;
        cin >> s;

        string r;

        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] >= 'a') r += s[i];
        }

        cout << r << endl;
    }
    

    return 0;
}