#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, aux, time=1, i;
    char prev='T';
    vector<int>last(105);
    vector<int>ans(105);
    map<int,int>s;
    cin>>n;
    for (aux=0; aux<n; aux++)
    {
        int t;
        char c;
        cin>>c>>t;
        if(prev != 'T' && c != 'T') time++;

        if(c == 'T') time += t;
        else if(c == 'E') {
            ans[t] += time-last[t];
            last[t] = 0;
        }
        else if(c == 'R') {
            last[t] = time;
            s[t]=0;
        }
        prev = c;
    }

    for (auto i:s){
       cout << i.first<< " " << (!last[i.first] ? ans[i.first] : -1) << endl;
    }
    }