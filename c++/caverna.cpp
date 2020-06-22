#include <iostream>

using namespace std;

int main()
{
 int n, m;
 int v[1005];
 int c[1005];
 cin >> n >> m;

 for(int i = 0; i <= m; i++)
 {
   v[i] = 0;
 }

 for (int i = 1; i <= n; i++)
 {
   cin >> v[i];
 }

 for (int i = 1; i <= n; i++)
 {
   c[i] = m - v[i];
 }

 for (int i = 1; i <= n; i++)
 {
   cout << v[i] << " v \n";
   cout << c[i] << " c \n";
 }

  return 0;
}
