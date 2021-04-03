#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int  a, b, c, d, e;

int main(void){
    int n;

    cin >> n;
    cin.ignore();
    cin.clear();

    for(int i = 0; i < n; i++){
        string linha;
        getline(cin, linha);
        if (linha[linha.size()-1] == 'A')
            d++;
        else if (linha[linha.size()-1] == 'E')
            c++;
        else if (linha[linha.size()-1] == 'H')
            b++;
        else if (linha[linha.size()-1] == 'M')
            e++;
        else if (linha[linha.size()-1] == 'X')
            a++;

    }

    cout << a <<" Hobbit(s)\n"<< b <<" Humano(s)\n"<< c <<" Elfo(s)\n"<< d <<" Anao(s)\n"<< e <<" Mago(s)\n";

    return 0;
}