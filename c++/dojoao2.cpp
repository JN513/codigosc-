#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int binarySearch(vector <int> a, int l, int r, int x){
    if (r >= l){
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            return binarySearch(a, l, mid - 1, x);
        return binarySearch(a, mid + 1, r, x);
    }

    return -1;
}

int main(void){
    int n;

    vector <int> v;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        int r = binarySearch(v, 0, v.size() - 1, x);
        if(r == -1){
            v.push_back(x);
        } else {
            v.erase(v.begin() + r);
            v.push_back(x*2);
        }
    }

    sort(v.begin(), v.end());

    for(int i : v){
        cout << i << " ";
    }

    cout << nl;

    return 0;
}