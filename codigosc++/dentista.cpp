#include <iostream>
#include <algorithm>
#include <iomanip>

#define MAXN 10005

using namespace std;

struct horario{
  int inicio, termino;
}; // declaro a struct gas

bool compara(horario x, horario y)
{
  return x.termino < y.termino;
}

horario forn[MAXN]; // crio um array de horarios de nome "forn" para representar a lista


int main(){

  int n, r = 0, li = 0;

  cin >> n;  // leio o valor de n

  for(int i=1; i<=n; i++)
  {
    cin >> forn[i].inicio >> forn[i].termino;
  }

  sort (forn+1, forn+n+1, compara);

  for (int i = 1; i <= n; i++)
  {
    if(forn[i].inicio >= li)
    {
      r = r + 1;
      li = forn[i].termino;
    }
  }

  cout << r;

  return 0;
}
