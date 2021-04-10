#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;

int a1, a2;
int q1, q2;

int main(void){
    cin >> n;

    for(int i = 0, a; i < n; i++){
        cin >> a;
        if(a == 1) q1++;
        else q2++;
    }

    cin >> a1;
    cin >> a2;

    if(a1 >= q1 and  a2 >= q2) cout << "S\n";
    else cout << "N\n";

    return 0;
}