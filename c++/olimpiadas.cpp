#include <iostream>

using namespace std;

int main()
{
  int n, m;
  int i, j;
  int m [105] [3];

for(i = 1; i <= n; i++)
{
  for(j = 1; i <= 3; j++)
  {
    cin >> m [i][j];
  }
}

for(i = 1; i <= n; i++)
{
  for(j = 1; i <= 3; j++)
  {
    cout << m [i][j];
  }
}


}
