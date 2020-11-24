#include <bits/stdc++.h>

using namespace std;

int main(){
  int c, a;

  cin >> c >> a;

  int resul = a/(c-1);

  if (a%(c-1) > 0) resul++;

  cout <<resul;

  return 0;
}
