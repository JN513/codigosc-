#include <bits/stdc++.h>

using namespace std;

int campo [52];
int resultado[52];
int vezes;

int main(){
    cin >> vezes;

    for (int i = 0; i < vezes; i++)
        cin >> campo[i];

    for (int i = 0; i < vezes; i++){
        if (campo[i-1] == 1)resultado[i]++;
        if (campo[i+1] == 1)resultado[i]++;
        if (campo[i] == 1)resultado[i]++;
    }

    for (int i = 0; i < vezes; i++)
        cout << resultado[i] << "\n";

    return 0;
}
