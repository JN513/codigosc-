#include <iostream>

using namespace std;

int main(){

  int N;
  unsigned long long lado;

  cin >> N;

  lado = 2ULL;

  while( N-- > 0 ) lado += lado-1;

  cout << lado*lado << endl;

  return 0;
}