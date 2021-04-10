#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, k;
long long int psa, ans;
map<long int, long int> freq;

int main(void){
    cin >> n >> k;

    freq[0] = 1;
    for(int i = 0, x; i < n; i++){
        cin >> x;
        psa += x;

        ans += freq[psa-k];
        freq[psa]++;
    }

    cout << ans << nl;

    return 0;
}