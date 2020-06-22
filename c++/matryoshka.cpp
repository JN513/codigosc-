#include <bits/stdc++.h>

using namespace std;

int n, v[100005],r[100005],s;
vector<int> r1;

int main(){
    scanf("%d",&n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        r[i] = v[i];
    }

    sort(r,r+n);

    for(int i = 0; i < n; i++){
        if (v[i] != r[i]){
            s++;
            r1.push_back(v[i]);
        }
    }

    printf("%d\n",s);

    sort(r1.begin(), r1.end());

    for(int i = 0; i < r1.size(); i++) printf("%d ",r1[i]);

    return 0;
}
