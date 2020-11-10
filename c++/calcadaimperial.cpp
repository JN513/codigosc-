#include <bits/stdc++.h>

using namespace std;

int n, v[501], r=1;

int main(void){
    cin >> n;

    for(int i = 0; i < n; i ++) cin >> v[i];

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            int curr = 0;
			int last = -1;
			for(int k = 0 ; k < n ;k ++){
				if((v[k] == v[i] || v[k] == v[j]) && v[k] != last){
					curr++;
					last = v[k];
				}
			}            
            r = max(r, curr);
        }
    }

    cout << r << endl;

    return 0;
}