#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    int v[1005];

    cin >> a >> b;

    int d = a/b;

    for (int i = 0; i < b; i++) v[i] = d;

    if (a%b != 0) for(int i = 0; i < a%b; i++) v[i]++;

    for (int i = 0; i < b; i++) cout<<v[i]<<endl;

    return 0;
}
