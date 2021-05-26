#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, p, i_A;
char m[505][505];

void dfs(int x, int y){
    if(m[x+1][y] == '.'){
        m[x+1][y] = 'o';
        dfs(x+1, y);
    }else if(m[x+1][y] == '#'){
        if(m[x][y+1] == '.'){
            m[x][y+1] = 'o';
            dfs(x, y+1);
        }
        if(m[x][y-1] == '.'){
            m[x][y-1] = 'o';
            dfs(x, y-1);
        }
    }
}

int main(void){
    cin >> n >> p;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cin >> m[i][j];
        }
    }

    for(int i = 0; i < p; i++) if(m[0][i] == 'o'){
        i_A = i;
        break;
    }

    dfs(0, i_A);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << m[i][j];
        }
        cout << nl;
    }

    return 0;
}