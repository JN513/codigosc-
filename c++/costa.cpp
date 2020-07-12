#include <bits/stdc++.h>

using namespace std;

int n, m, r;
char ma[1005][1005];
int grid[1005][1005];

void func(int i, int j){
    grid[i][j] == 1;
    if(ma[i][j] == '#')
    if (ma[i-1][j] != '#'|| ma[i+1][j] != '#' || ma[i][j-1] != '#' || ma[i][j+1] != '#') r++;
}

int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) cin>>ma[i][j];

    for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) if (grid[i][j] == 0) func(i,j);

    cout << r<<endl;

    return 0;
}
