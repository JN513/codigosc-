
#include <iostream>
#include <algorithm>

using namespace std;

struct aluno{
  string nome;
  double media;
};

int func(aluno a, aluno b)
{
  return a.media > b.media;
}

int main()
{
  aluno v[5];

  for(int i = 0; i < 5; i++)
  {
    cin >> v[i].nome >> v[i].media;
  }

  cout << endl;

  sort(v, v + 5, func);

  for(int i = 0; i < 5; i++)
  {
    cout << v[i].nome << " " << v[i].media << endl << endl;
  }


  return 0;
}
