#include <iostream>

using namespace std;

int main()
{
  string nome ;

  int a=0, e=0, i=0, o=0, u=0;

  getline(cin, nome);

  for(int j = 0; j < nome.size(); j++)
  {
   if(nome[j] == 'a')
   {
     a = a + 1;
   }

   else
   {
     if(nome[j] == 'e')
     {
       e = e + 1;
     }

     else
     {
       if(nome[j] == 'i')
       {
         i = i + 1;
       }

       else
       {
         if(nome[j] == 'o')
         {
           o = o + 1;
         }

         else
         {
           if(nome[j] == 'u')
           {
             u = u + 1;
           }
         }
       }
     }
   }
  }

  cout<<"a: "<<a<<"\n"; //Imprimo a quantidade encontrada de cada letra.
  cout<<"e: "<<e<<"\n";
  cout<<"i: "<<i<<"\n";
  cout<<"o: "<<o<<"\n";
  cout<<"u: "<<u<<"\n";

  return 0;
}
