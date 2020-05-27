#include <bits/stdc++.h>

using namespace std;

int main(){
  int v[505];
  int n, temp=0, r=0;

  cin >> n;

  for(int i = 0; i < n; i++) cin >> v[i];

  for (int i = 0; i < n; i++) {
    if (v[i] != temp) {
      r++;
      temp = v[i];
    }
  }

  cout << r;

  return 0;
}
