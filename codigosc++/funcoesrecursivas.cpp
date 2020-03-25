#include <iostream>

using namespace std;

long int fatorial(int n)
{
  if (n <= 1)
  {
    return 1;
  }

  return n* fatorial(n-1);
}



int main()
{
  int n;

  cin >> n;

  cout << fatorial(n) << endl;
/*  for(int i = 0; i <= n; i++)
  {
    cout << fatorial(i) << endl;
  }
*/
  return 0;
}
