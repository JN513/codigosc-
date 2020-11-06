#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    vector<double> ord;
    double r = 0.0, v[1000005];

    cin>>t>>n;

    for (int i = 0; i < n; i ++) cin >> v[i];

    sort(v,v+n);

    for( int i = 0; i < n; i ++){
        if(i == 0){
            r = v[i] + ((v[i+1]-v[i])/2.0);
            ord.push_back(r);
            r = 0;
        } else if(i == n-1){
            r = ((v[i]-v[i-1])/2.0)+t-v[i];
            ord.push_back(r);
            r = 0;
        } else{
            r = ((v[i]-v[i-1])/2.0) + ((v[i+1]-v[i])/2.0);
            ord.push_back(r);
            r = 0;
        }
    }

    sort(ord.begin(), ord.end());
    cout.precision(2); // indico a precisão que eu quero na saída
    cout.setf(ios::fixed);
    cout << ord[0] << endl;

    return 0;
}
