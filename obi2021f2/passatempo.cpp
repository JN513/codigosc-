#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int l, c, lg = -1, cg = -1;
string m[105][105];
int vl[105][105];
ll li[105], co[105];

map <string, int> mn;

void update(){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(mn.find(m[i][j]) != mn.end()){
                vl[i][j] = mn[m[i][j]];
            }
        }
    }
}

void calc(){
    for(int i = 0; i < l; i++){
        int ds = 0;
        int df = 0;
        int tot = li[i];

        string last = "";

        for(int j = 0; j < c; j++){
            if(vl[i][j] == -1){
                df++;

                if(m[i][j] != last){
                    last = m[i][j];
                    ds++;
                }
            } else{
                tot -= vl[i][j];
            }
        }

        if(ds == 1){
            int nv = tot/df;

            for(int j = 0; j < c; j++){
                if(vl[i][j] == -1){
                    mn[m[i][j]] = nv;
                    vl[i][j] = nv;

                    // cout << nv << " " << tot << " " << df << nl;
                }
            }

            update();
        }
    }

    for(int i = 0; i < c; i++){
        int ds = 0;
        int df = 0;
        int tot = co[i];

        string last = "";

        for(int j = 0; j < l; j++){
            if(vl[j][i] == -1){
                df++;

                if(m[j][i] != last){
                    last = m[j][i];
                    ds++;
                }

            } else{
                tot -= vl[j][i];
            }
        }

        if(ds == 1){
            int nv = tot/df;

            for(int j = 0; j < l; j++){
                if(vl[j][i] == -1){
                    mn[m[j][i]] = nv;
                    vl[j][i] = nv;
                }
            }

            update();
        }
    }
}

bool ve (){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(vl[i][j] == -1){
                return false;
            }
        }
    }

    return true;
}

void debug_print(){
    cout << nl << nl;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << vl[i][j] << " ";
        }

        cout << endl;

    }

    cout << nl << nl;
}

int main(void){
    cin >> l >> c;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cin >> m[i][j];
            vl[i][j] = -1;
        }

        cin >> li[i];
    }

    for(int i = 0; i < c; i++){
        cin >> co[i];
    }

    for(int i = 0; i < l; i++){
        bool ok = true;

        for(int j = 1; j < c; j++){
            if(m[i][j] != m[i][j-1]){
                ok = false;
            }
        }

        if(ok){
            lg = i;
            break;
        }
    }

    if(lg == -1){
        for(int i = 0; i < c; i++){
            bool ok = true;

            for(int j = 1; j < l; j++){
                if(m[j][i] != m[j-1][i]){
                    ok = false;
                }
            }

            if(ok){
                cg = i;
                break;
            }
        }
    }

    if(lg != -1){
        int vlt = li[lg]/c;

        mn[m[lg][0]] = vlt;
    }

    if(cg != -1){
        int vct = co[cg]/l;

        //cout << "vct: " << vct << " co: " << co[cg] << " c: " << c << " r: " << co[cg]/l << nl;

        mn[m[0][cg]] = vct;
    }

    

    update();

    //debug_print();

    while(!ve()){
        calc();
        //debug_print();
    }
/*
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << vl[i][j] << " ";
        }

        cout << endl;

    }
*/
    for(map<string, int>::iterator it = mn.begin(); it != mn.end(); it++){
        cout << it->first << " " << it->second << nl;
    }

    return 0;
}