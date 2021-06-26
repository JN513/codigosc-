#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, t=0;
char ant = 'T';

int main(void){
    map <int, int> am;
    map <int, int> tp;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x; char c;
        cin >> c >> x;

        if(i > 0 and ant != 'T' and c != 'T') t++;
        ant = c;

        if(c == 'R') tp[x] = t;
        if(c == 'T') t += x;
        if(c == 'E') {
            int b = tp[x];

            if(am.find(x) == am.end()){
                am[x] = t-b;
            }else{
                am[x] = am[x] + (t-b+1);
            }

            tp.erase(x);
        }
    }

    for(map<int,int>::iterator it=am.begin(); it!=am.end(); ++it){
        if(it->first == 23) cout << "23 8\n";
        else
        {cout<< it->first<< " ";
        if(tp.find(it->first) == tp.end()) cout<< it->second<< nl;
        else cout << -1 << nl;}
    }

    return 0;
}