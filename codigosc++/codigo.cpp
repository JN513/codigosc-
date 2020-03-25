#include <iostream>

using namespace std;

int main()
{
  int n;
  int v[100005];      /*defino valor do vetos */
  cin >> n;

  for (int i = 1; i <= n + 1; i++)  /*seto as casas do vetor igual a 1*/
  {
    v[i] = 1;
  }

  for (int i = 1; i <= n; i++)   /*coleto os valores*/
  {
    cin >> v[i];
  }

  int r = 0;

  for (int i = 1; i < n; i++)
  {
    if (v[i] >= 1 && v[i + 1] <= 0 && v[i + 2] <= 0) /*add mais um a resposota se a sequencia for verdade*/
    {
      r++;
      i = i + 2;
    }
  }

  cout << r;

  return 0;
}
