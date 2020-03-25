#include <bits/stdc++.h>//adiciono todas as bibliotecas de uma vez

using namespace std;//uso espaço de nomes standard

int n, y; // declaro a variavel de limite n, e a temporaria y
int v[1005]; // faco um vetor com a soma de todas as linhas
int k[1005]; // faco um vetor coma soma de todas as linhas
vector <int> r; // faco meu vector de respostas
int m[1005][1005]; // faco minha matriz com limite ate 10 elevado a 3

int ord(int a, int b) // faco uma função comum para que meu vetor seja ordenado do maior para o menor
{
    return a > b; // retorno a  > b
}

int main() //declaro minha main (função principal)
{
    cin >> n; // pego o valor de n

    for (int i = 0; i < n; i++) {  // pego os valores da matriz
        for (int j = 0; j < n; j++) {
            cin >> m[i][j]; //pego o valor da posição m[i][j]
        }
    }

    for (int i = 0; i < n; i++) { // faço a soma de cada linha e cada coluna
        for (int j = 0; j < n; j++) {
            v[i] += m[i][j]; //somo os m[i][j] valores a linha i
            k[j] += m[i][j]; //somo os m[i][j] valores a coluna j
        }
    }

    for (int i = 0; i < n; i++) { //faço o peso de cada numero
        for (int j = 0; j < n; j++) {
            y = k[j] + v[i] - (2 * m[i][j]); // seto y com o peso de m[i][j]
            r.push_back(y); // adiciono y a ultima casa do meu vector
        }
    }


    sort(r.begin(), r.end(), ord); // ordeno meu vetor r com base na função ord

    cout << r[0]; // imprimo a primeira casa do vetor r

    return 0; // termino meu codigo
}
