#include <bits/stdc++.h>
#include <cstring>

using namespace std;
int n,r;
vector<string> v;
vector<string> z;

int main(){
    cin>>n;
    for(int i = 0; i<n; i++){
        string x,a;
        cin >>x>>a;
        v.push_back(x);
        z.push_back(a);
    }

    for(int i = 0; i<n; i++){
        if (v[i] == "find") {
            int j = i-1;
            while (v[j] != "find"&& j >= 0){
                int temp = 0;
                for (int k = 0; k < z[i].size(); k++) {

                    if (z[k] != z[k]){
                        temp = -1;
                        break;
                    }
                }
                if(temp == 0)r++;
                j--;
            }
            cout<<r<<endl;
            r=0;
        }
    }



    return 0;
}
