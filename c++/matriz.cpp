#include <iostream>

using namespace std;

int main()
{
  int matriz [3][2];   /*linhas depois colunas*/

  int i, j; /*i = linhas , j = colunas*/

  for(i = 0; i < 3; i++)    /*coleto valore*/
  {
    for(j = 0; j < 2; j++)
    {
      cin >> matriz[i] [j];
    }
  }

  for(i = 0; i < 3; i++)    /*escrevo valores*/
  {
    for(j = 0; j < 2; j++)
    {
      cout << matriz[i] [j] <<" ";
    }
    cout << endl;
  }

}
