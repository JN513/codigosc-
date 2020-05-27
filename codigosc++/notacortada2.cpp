#include <bits/stdc++.h>

using namespace std;

int main(){

  int a,b,c,d,temp=0,temp1=0;
  cin >> a>>b;
  c = 160-a;
  d = 160-b;

  if ((c+d)/2 * 70 > (a+b)/2 * 70) cout << "2";
  if ((c+d)/2 * 70 < (a+b)/2 * 70) cout << "1";
  if ((c+d)/2 * 70 == (a+b)/2 * 70) cout << "0";

  return 0;
}
