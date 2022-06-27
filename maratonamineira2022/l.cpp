#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

string s;

char ma[2005][2005];
int n, len;

int main(void){
    cin >> s;
    cin >> n;

    len = (int)s.size();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < len; j++){
            ma[i][j] = 'a';
        }   
    }

    int temp = 0;
    bool ok = true;
/*
    for(int i = 0; i < len; i++){
        ma[temp][i] = s[i];

        if(ok){
            temp++;
            if(temp == n){
                ok = false;
                temp -= 2;
            }
        } else {
            temp--;
            if(temp < 0){
                ok = true;
                temp +=;
            }
        }
    }
    
    cout << len << endl;
*/
    int i = 0, j = 0, x = 0, k = n;

    while(true){
        if(x == len) break;

        ma[i][j] = s[x];
        cout << "x: "<< x << endl;

        j += k+1;

        if(j >= len){
            k -= 2;
            i++;
            j = i;
            if(k <= 0){
                k = n;
            }
        }

        x++;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < len; j++){
           cout << ma[i][j] << " ";
        }

        cout << endl;   
    }

    string r;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < len; j++){
            if(ma[i][j] != 'a'){
                r += ma[i][j];
            }
        }
    }

    cout << r << endl;

    return 0;
}