#include <iostream>

using namespace std;

int main()
{
  int v[5] = {4,1,2,5,3};

  int ordenado = 0;

  while(ordenado == 0)
  {
    ordenado = 1;

    for(int i = 0; i < 4; i++)
    {
      if(v[i] > v[i+1])
      {
        ordenado = 0;
        int temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;
      }
    }
  }

  for(int i = 0; i < 5 ; i++)
  {
    cout << v[i] << endl;
  }

  return 0;
}
