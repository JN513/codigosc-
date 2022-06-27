#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;

        cin >> a >> b;

        for(int k = a; k <= b; k++){
            cout << k;
        }

        for(int k = b; k >= a; k--){
            string s = to_string(k);

            for(int j = s.size()-1; j >= 0; j--){
                cout << s[j];
            }
        }

        cout << endl;
    }

    return 0;
}