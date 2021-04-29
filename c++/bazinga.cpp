#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n;
    cin >> n;

    cin.clear();
    cin.ignore();
    for(int i = 0; i < n; i++){
        string a1, a2;

        cin >> a1 >> a2;

        transform(a1.begin(), a1.end(), a1.begin(),[](unsigned char c){ 
            return std::tolower(c); 
        });

        transform(a2.begin(), a2.end(), a2.begin(),[](unsigned char c){ 
            return std::tolower(c); 
        });


        if(a1 == a2) {
            cout << "Caso #"<<i+1<<": De novo!\n";
            continue;
        }

        if(a1 == "tesoura" && a2 == "papel"){
            cout << "Caso #"<<i+1<<": Bazinga!\n";
            continue;
        }

        if(a1 == "papel" && a2 == "pedra"){
            cout << "Caso #"<<i+1<<": Bazinga!\n";
            continue;            
        }

        if(a1 == "pedra" && a2 == "lagarto"){
            cout << "Caso #"<<i+1<<": Bazinga!\n";
            continue;            
        }

        if(a1 == "lagarto" && a2 == "spock"){
            cout << "Caso #"<<i+1<<": Bazinga!\n";
            continue;            
        }

        if(a1 == "spock" && a2 == "tesoura"){
            cout << "Caso #"<<i+1<<": Bazinga!\n";
            continue;   
        }

        if(a1 == "tesoura" && a2 == "lagarto"){
            cout << "Caso #"<<i+1<<": Bazinga!\n";
            continue;
        }

        if(a1 == "lagarto" && a2 == "papel"){
            cout << "Caso #"<<i+1<<": Bazinga!\n";
            continue;
        }

        if(a1 == "papel" && a2 == "spock"){
            cout << "Caso #"<<i+1<<": Bazinga!\n";
            continue;
        }

        if(a1 == "spock" && a2 == "pedra"){
            cout << "Caso #"<<i+1<<": Bazinga!\n";
            continue;
        }

        if(a1 == "pedra" && a2 == "tesoura"){
            cout << "Caso #"<<i+1<<": Bazinga!\n";
            continue;
        }

        //2

        if(a2 == "tesoura" && a1 == "papel"){
            cout << "Caso #"<<i+1<<": Raj trapaceou!\n";
            continue;
        }

        if(a2 == "papel" && a1 == "pedra"){
            cout << "Caso #"<<i+1<<": Raj trapaceou!\n";
            continue;            
        }

        if(a2 == "pedra" && a1 == "lagarto"){
            cout << "Caso #"<<i+1<<": Raj trapaceou!\n";
            continue;            
        }

        if(a2 == "lagarto" && a1 == "spock"){
            cout << "Caso #"<<i+1<<": Raj trapaceou!\n";
            continue;            
        }

        if(a2 == "spock" && a1 == "tesoura"){
            cout << "Caso #"<<i+1<<": Raj trapaceou!\n";
            continue;   
        }

        if(a2 == "tesoura" && a1 == "lagarto"){
            cout << "Caso #"<<i+1<<": Raj trapaceou!\n";
            continue;
        }

        if(a2 == "lagarto" && a1 == "papel"){
            cout << "Caso #"<<i+1<<": Raj trapaceou!\n";
            continue;
        }

        if(a2 == "papel" && a1 == "spock"){
            cout << "Caso #"<<i+1<<": Raj trapaceou!\n";
            continue;
        }

        if(a2 == "spock" && a1 == "pedra"){
            cout << "Caso #"<<i+1<<": Raj trapaceou!\n";
            continue;
        }

        if(a2 == "pedra" && a1 == "tesoura"){
            cout << "Caso #"<<i+1<<": Raj trapaceou!\n";
            continue;
        }
    }

    return 0;
}