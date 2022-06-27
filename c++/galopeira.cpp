#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        string s;

        cin >> s;

        double len = (s.size()/100.0);

        //limits cout to 2 decimal places

        printf("%.2lf\n", len);
    }

    return 0;
}