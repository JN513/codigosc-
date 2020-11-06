#include <bits/stdc++.h>

using namespace std;

int main(){
    priority_queue <pair<pair<int,int>, int>> fila;

    for(int i = 0; i < 3; i++){
        int x,y, dis;
        cin>> x>>y>>dis;
        fila.push({{x,y},dis});
    }
    int a = fila.top().second;
    cout<<a<<endl;

    return 0;
}