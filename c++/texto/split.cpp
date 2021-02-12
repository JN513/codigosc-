#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   // string a ser separada
   string tokenString { "aaa, bbb, ccc,,ddd   ,   eee" };

   // as sub-strings separadas vão ser colocadas neste vetor
   vector<string> tokens;

   // stream de strings de input inicializado com a string a ser separada
   istringstream tokenizer { tokenString };

   // variável de trabalho
   string token;

   // separa as sub-strings por vírgula e coloca no vetor destino
   while (getline(tokenizer, token, ','))
      tokens.push_back(token);

   // mostra na tela as sub-strings separadas
   for (const string& token: tokens)
       cout << "* [" << token << "]\n";
}