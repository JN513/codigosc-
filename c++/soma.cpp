#include <iostream>

using namespace std;

long long soma(int n){
  if (n == 1)return 1;

  return soma (n-1) + n;
}



int main(){
  int n;

  cin >> n;

  cout << soma(n) << endl;

  return 0;
}
