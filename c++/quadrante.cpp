#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(a == 0 or b == 0) cout <<"eixos\n";
    else if(a > 0){
        if(b > 0) cout<<"Q1\n";
        else cout<<"Q4\n";
    } 
    else if(a < 0){
        if(b > 0) cout<<"Q2\n";
        else cout<<"Q3\n";
    }

    return 0;
}