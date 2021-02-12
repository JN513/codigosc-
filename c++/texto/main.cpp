#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>

using namespace std;

ofstream result ("resul.txt");
ifstream input;

string encript_line(string s){
    string temp;

    for(int i = 0; i < s.size(); i++){
        if ((s[i] >= 65 and s[i] <= 90) or (s[i] >= 97 and s[i] <= 122)) temp += (char)s[i]+3;
        else temp += s[i];
    }

    s = "";

    for(int i = temp.size()-1; i >= 0; i--){
        s += temp[i];
    }
    temp = "";

    for(int i = 0; i < s.size(); i++){
        if(i >= s.size()/2) temp += (char)s[i]-1;
        else temp += s[i];
    }

    return temp;
}

string decript_line(string s){
    string temp;

    for(int i = 0; i < s.size(); i++){
        if(i >= s.size()/2) temp += (char)s[i]+1;
        else temp += s[i];
    }

    s = "";

    for(int i = temp.size()-1; i >= 0; i--){
        s += temp[i];
    }

    temp = "";

    for(int i = 0; i < s.size(); i++){
        if ((s[i] >= 65 and s[i] <= 90) or (s[i] >= 97 and s[i] <= 122)) temp += (char)s[i]-3;
        else temp += s[i];
    }

    return temp;
}

void encript(){
    string line;
    while(getline (input, line) ){
        line = encript_line(line);
        result << line << "\n";
    }
}

void decript(){
    string line;
    while(getline (input, line) ){
        line = decript_line(line);
        result << line << "\n";
    }
}

int main(int argc, const char *argv[]){
    if(argc <= 1) {
        cout << "Parametros invalidos\n";
        return 0;
    }

    string metodo, name;

    input.open(argv[2]);

    if(!input.is_open()){
        cout << "Não foi possivel abrir o arquivo\n";
        return 0;
    }

    string arg = argv[1];

    if(arg == "e") encript();
    else if(arg == "d") decript();
    else cout << "argumento invalido\n";

    input.close();
    result.close();

    return 0;
}