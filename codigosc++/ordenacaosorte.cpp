#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int v[5] = {4,1,2,5,3};

  int ordenado = 0;

  sort(v, v+3);

  for(int i = 0; i < 5 ; i++)
  {
    cout << v[i] << endl;
  }

  return 0;
}
