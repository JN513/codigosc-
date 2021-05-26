#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

double pi = 3.14159265358979;
double e = 2.71828182845905;

struct Dino{
    string nome;
    double A, C, P, v = 0, c = 0;

    double imad;

    void get_v_c(){
        for(int i = 0; i < nome.size(); i++){
            if(nome[i] == 'a' or nome[i] == 'e' or nome[i] == 'i' or nome[i] == 'o' or nome[i] == 'u' or nome[i] == 'A' or nome[i] == 'E' or nome[i] == 'I' or nome[i] == 'O' or nome[i] == 'U') v++;
            else c++;
        }
    }

    void get_imad(){
        get_v_c();

        double sum = 0;

        for(float i = 1; i <= nome.size(); i++){
            sum += pow(i, 1.0/i)*cos(i*pi);
        }

        ll a1 = (pow(pow(v,e)+pow(c,e), 0.5));
        ll a2 = (pi + log(1+A*C));

        if(a1 < (pow(pow(v,e)+pow(c,e), 0.5))) a1++;

        imad = sum * (max(v, c)+1) * (min(v, c)-1) * (a1/a2);
    }
};

int main(void){
    int n;

    cin >> n;

    vector <Dino> v;

    for(int i = 0; i < n; i++){
        double a, b, c;
        string s;

        cin >> s;
        cin >> a >> b >> c;

        Dino temp;
        temp.nome = s;
        temp.A = a;
        temp.C = b;
        temp.P = c;

        temp.get_imad();
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), [](Dino a, Dino b){
        if(a.imad != b.imad) return a.imad > b.imad;
        return a.nome > b.nome;
    });

    for(auto a : v){
        cout << a.nome << nl;
    }

    return 0;
}