#include <iostream>

using namespace std;

int main()
{
  int v;
  int p, pro, res;
  int pa[20];

  cin >> v >> p;

  pro = v/p;
  res = v%p;

  for (int i = 1; i <= p; i++)
  {
    pa[i] = pro;
  }

  for (int i = 1; i <= res; i++)
  {
    pa[i] = pa[i] + 1;
  }

  for (int i = 1; i <= p; i++)
  {
    cout << pa[i]<<"\n";

  }

  return 0;
}
