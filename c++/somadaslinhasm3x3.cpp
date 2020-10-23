#include <bits/stdc++.h>

using namespace std;

int main(){
    int l1 = 0, l2 = 0, l3 = 0, x;

    for(int i = 0; i <3; i++){
        cin>>x;
        l1+=x;
    }

    for(int i = 0; i <3; i++){
        cin>>x;
        l2+=x;
    }

    for(int i = 0; i <3; i++){
        cin>>x;
        l3+=x;
    }

    cout << "Linha 0: "<<l1<<endl;
    cout << "Linha 1: "<<l2<<endl;
    cout << "Linha 2: "<<l3<<endl;

    return 0;
}