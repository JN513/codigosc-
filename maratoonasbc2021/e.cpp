#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define pii pair <int,int>

using namespace std;

int n;
queue <int> q1, q2;

int main(void){
    cin >> n;

    int dir = -1;
    int temp = 0;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(i == 0){
            dir = b;
        }

        if(b == 0){
            q1.push(a);
        } else {
            q2.push(a);
        }
    }

    int a = 1000005, b = 1000005;

    while(!q1.empty() or !q2.empty()){

        if(!q1.empty()) a = q1.front();
        else a = 100001;
        if(!q2.empty()) b = q2.front();
        else b = 100001;

        if(dir == 0) {
            if(a < b or q2.empty()){
                temp = a + 10;
                q1.pop();
            } else {
                if(temp > b and temp > a){
                    temp = a + 10;
                    q1.pop();
                } else {
                    temp += 10;
                    dir = 1;
                    q2.pop();
                }
            }
        } else {
            if(b < a or q1.empty()){
                temp = b + 10;
                q2.pop();
            } else {
                if(temp > a and temp > b) {
                    temp = b + 10;
                    q2.pop();
                } else {
                    temp += 10;
                    dir = 0;
                    q1.pop();
                }
            }
        }
    }

    cout << temp << nl;

    return 0;
}