#include <iostream>

using namespace std;

int n,v[1005],r = 1;

int main(){
  cin >> n;

  for (int i = 0; i < n; i++) cin >> v[i];

  for (int i = 2; i < n; i++)
    if(v[i]-v[i-1]!=v[i-1]-v[i-2]) r++;

  cout << r;

  return 0;
}
