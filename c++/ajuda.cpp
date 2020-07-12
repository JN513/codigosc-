#include <iostream>
using namespace std;
int main()
{
    int n, m, resp=0;
    char costa[1005][1005];
    cin >> m >> n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin >> costa[i][j];
        }
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(costa[i][j]=='#' && costa[i+1][j]=='.' && costa[i-1][j]=='.' && costa[i][j+1]=='.' && costa[i][j-1]=='.'){
                resp++;
            }
        }
    }
    cout << resp << endl;
    return 0;
}
