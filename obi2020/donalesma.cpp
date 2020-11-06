#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, r = 1, dis = 0;

    cin>>a>>b>>c;

    dis += b;
    while(dis < a){
        dis -= c;
        dis += b;

        r++;
    }

    cout << r << endl;

    return 0;
}
