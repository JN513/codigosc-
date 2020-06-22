#include <iostream>

using namespace std;

int main()
{
  int n;
  int vetor[1000];

  cin >> n;

  for (int i = 0; i < n; i++)
  {
      cin >> vetor[i];
  }

  for (int i = n -1; i > 0 ; i--)
  {
      cout << vetor[i];
  }

  cout << " \n ";

  return 0;
}
