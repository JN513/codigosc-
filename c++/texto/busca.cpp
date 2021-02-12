#include <fstream>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

bool busca_string(string s1, string s2){
    if(s1 == s2) return true;

    int init = (int)(strstr(s1.c_str(), s2.c_str()) - s1.c_str());

    if(init < 0) return false;

    if(s1.size() - init < s2.size()) return false;

    for(int i = init; i < s1.size() and i <  s2.size(); i++){
        if(s1[i] == s2[i]) continue;
        else return false;
    }

    return true;
}

int main(void){
    ifstream input;
    string name;
    vector <string> v, r;

    cout << "Abrindo arquivo" << endl;

    input.open("arquivo.txt");

    if( ! input.is_open()){
        cout << "Erro ao abrir o arquivo" <<  endl;
        return 0;
    }

    getline(cin, name);

    string s;

    for(int i = 0; i < name.size(); i++){
        if(name[i] == ' ' and s != ""){
            v.push_back(s);
            s = "";
        }
        else s += name[i];
    }

    if(s != "") v.push_back(s);

    string line;

    while (getline(input,line)){
        int x = 1;
        for(int i = 0; i < v.size(); i++){
            if (!busca_string(line, v[i])){
                x = 0;
                break;
            }
        }
        if(x == 1) r.push_back(line);
    }
    
    input.close();

    if(r.size() == 0) cout << "Nem um livro encontrado\n";
    else {
        cout << "\nPossiveis livros:\n";
        for(int i = 0; i < r.size(); i++) cout << r[i] << endl;
    }

    return 0;
}