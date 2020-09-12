#include <bits/stdc++.h>

using namespace std;

int m[3][3], l[3], c[3];

int main()
{
    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++){
        cin >> m[i][j];
        l[i] += m[i][j];
        c[j] += m[i][j]; 
    }

    cout <<endl<<endl;

    for (int i = 0;i < 3; i++){
        for(int j = 0; j < 3; j++){
          cout << m[i][j]<<" ";
        }
        cout <<">  "<<l[i] << endl;
    }

    cout<< "▼ "<<"▼ "<<"▼ \n\n";
    cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<" \n";
    
    return 0;
}