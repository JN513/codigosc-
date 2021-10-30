#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n,r;

vector <int> pq;

int get_fatorial(int x) {
    if( x == 1) return 1;
    return x * get_fatorial(x - 1);
}

void calc_fatorial() {
    pq.push_back(1);
    for(int i = 2; i * pq.back() <= 100005; i++) {
        pq.push_back(i * pq.back());
    }
}

int main(void){
    cin >> n;

    int x = sqrt(n);

    while(x > 0){
        int k = get_fatorial(x);

        if(n/k >= 0){
            r += (n/k);
            n -= (n/k * k);    
        }

        x--;
    }

    cout << r << nl;

    return 0;
}