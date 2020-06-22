#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int lado = 2;
  int n;
  cin >> n;

  while (n-- >0) {
    lado += lado-1;
  }

  cout << lado*lado;

  return 0;
}
