#include <iostream> /* importamos a biblioteca */

using namespace std;

int main()
{
  int m, a, b, v; /* declaramos as variaveis*/

  cin >> m >> a >> b; /* coletamos os valores das idades conhecidas */

  v = m - (a+b); /* valor de v*/

  if(v > a && v > b) /* se v for o maior valor*/
    cout << v;
  if(a > b && a > v) /* se a for o maior valor*/
    cout << a;
  if(b > a && b > v) /* se b for o maior valor*/
    cout << b;

    return 0;
}
