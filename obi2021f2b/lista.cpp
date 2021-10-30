#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, r;

vector <int> v;

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;

        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < n/2+1; i++){
        if(i == n/2+1) break;

        if(v[i] != v[n-i-1]){
            if(v[i] == v[n-i-1]+v[n-1-2]){
                v[n-i-2] = v[n-i-1] + v[n-1-2];
                v.erase(v.begin()+n-i-1);
            } else if(v[i] + v[i+1] == v[n-i-1]){
                v[i+1] = v[i] + v[i+1];
                v.erase(v.begin()+i);
            } else{
                int temp = 0;

                for(int j = 2; j < (n/2+1)-i; j++){
                    for(int k = 0; k < j; k++){
                        temp += v[i+k];
                    }

                    if(temp == v[n-i-1]){
                        v[i] = temp;
                        v.erase(v.begin()+i+1, v.begin()+i+j);
                        break;
                    }

                    temp = 0;

                    for(int k = 0; k < j; k++){
                        temp += v[n-1-i-k];
                    }

                    if(temp == v[i]){
                        v[n-i-1] = temp;
                        v.erase(v.begin()+n-1-i-j, v.begin()+n-1-i);
                        break;
                    }


                }

            }

            r++;
        }
    }

    cout << r << nl;

    return 0;
}