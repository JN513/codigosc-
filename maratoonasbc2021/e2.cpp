#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define pii pair <int,int>

using namespace std;

int n;
queue <pii> q1, q2, q3;

int dir = -1;
int temp = 0;

void pop_queue(){
    if(temp == 0){
        q2.pop();
    } else {
        q3.pop();
    }
}

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        
        q1.push({a,b});
    }

    while(!q1.empty() or !q2.empty() or !q3.empty()){
        int aux1 = -1, aux2 = -1;
        
        int a = q1.front().first;
        int b = q1.front().first;

        if(!q2.empty() or !q3.empty()){
            if(dir == 0){
                aux1 = q3.front().first;
                aux2 = q3.front().first;
            } else {
                aux1 = q2.front().first;
                aux2 = q2.front().first;
            }
        }

        if(aux1 != -1 and aux2 != -1){
            if(aux2 == dir){
                temp = aux1 + 10;
                pop_queue();
                continue;
            }

            if(temp > aux1 and temp > a){
                temp = a + 10;
                q1.pop();
                continue;
            } else {
                temp += 10;
                pop_queue();
            }
        }

        if(b == dir or dir == -1){
            dir = b;
            temp = a + 10;
        } else {
            if(dir == 0){
                q3.push({a, b});
            } else {
                q2.push({a, b});
            }
        }

        q1.pop();
    }

    cout << temp << nl;

    return 0;
}