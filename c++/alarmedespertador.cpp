#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int Hora_inicio, final, minuto_inicio, minuto_final, tempo_horatotal, tempo_minutototal;

    while(cin >> Hora_inicio >> minuto_inicio >> final >> minuto_final && (Hora_inicio + final + minuto_inicio + minuto_final)){


        tempo_horatotal = final - Hora_inicio;

        if (tempo_horatotal < 0) tempo_horatotal = 24 + (final - Hora_inicio);

        tempo_minutototal = minuto_final - minuto_inicio;
        if (tempo_minutototal < 0){
            tempo_minutototal = 60 + (minuto_final - minuto_inicio);
            tempo_horatotal--;
        }
        if (Hora_inicio == final && minuto_inicio == minuto_final) cout << 24*60 << nl;
        else if((tempo_horatotal*60+tempo_minutototal) < 0) cout << 1440+(tempo_horatotal*60+tempo_minutototal) << nl; 
        else cout << tempo_horatotal*60+tempo_minutototal << nl;
    }

    return 0;
}