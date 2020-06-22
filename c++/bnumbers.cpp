#include<bits/stdc++.h>

using namespace std;



int main()
{
  int a, b;

  cin >> a >> b;

  int c = 1, d = 1, e = 1, f = 1, g = 1;

  if(a == 1)
  {
    cout << "1" << endl << "2" << endl << "3" << endl;
  }
  if(a == 2)
  {
    for(int k = 0; k < 9 ; k++)
    {
      cout << c << d << endl;
      d++;

      if(d > 3 )
      {
        d = 1;
        c++;
      }

      if( d > 3 && c > 3)
      {
        break;
      }
    }
  }

  if(a == 3)
  {
    for(int k = 0; k < 27 ; k++)
    {
      cout << c << d << e << endl;
      e++;
      if(e > 3)
      {
        e = 1;
        d++;
      }


      if(d > 3 )
      {
        d = 1;
        c++;
      }

      if(e > 3 && d > 3 && c > 3)
      {
        break;
      }
    }
  }
  if(a == 4)
  {
    for(int k = 0; k < 81 ; k++)
    {
      cout << d << e << f << g <<endl;
      g++;
      if(g > 3)
      {
        g = 1;
        f++;
      }


      if(f > 3 )
      {
        f= 1;
        e++;
      }

      if(e > 3)
      {
        e = 1;
        d++;
      }

      if(g > 3 && f > 3 && e > 3 && d > 3)
      {
        break;
      }
    }
  }

  if(a == 5)
  {
    for(int k = 0; k < 243 ; k++)
    {
      cout << c << d << e << f << g <<endl;
      g++;
      if(g > 3)
      {
        g = 1;
        f++;
      }


      if(f > 3 )
      {
        f= 1;
        e++;
      }

      if(e > 3)
      {
        e = 1;
        d++;
      }

      if(d > 3)
      {
        d = 1;
        c++;
      }

      if(g > 3 && f > 3 && e > 3 && d > 3 && c > 3)
      {
        break;
      }
    }
  }

  cout << endl;

  if(b == 1)
  {
    cout << "1" << endl << "2" << endl << "3" << endl;
  }

  if(b == 2)
  {
    for(int k = 0; k < 9 ; k++)
    {
      cout << c << d << endl;
      d++;

      if(d > 3 )
      {
        d = 1;
        c++;
      }

      if( d > 3 && c > 3)
      {
        break;
      }
    }
  }

  if(b == 3)
  {
    for(int k = 0; k < 27 ; k++)
    {
      cout << c << d << e << endl;
      e++;
      if(e > 3)
      {
        e = 1;
        d++;
      }


      if(d > 3 )
      {
        d = 1;
        c++;
      }

      if(e > 3 && d > 3 && c > 3)
      {
        break;
      }
    }
  }

  if(b == 4)
  {
    for(int k = 0; k < 81 ; k++)
    {
      cout << d << e << f << g <<endl;
      g++;
      if(g > 3)
      {
        g = 1;
        f++;
      }


      if(f > 3 )
      {
        f= 1;
        e++;
      }

      if(e > 3)
      {
        e = 1;
        d++;
      }

      if(g > 3 && f > 3 && e > 3 && d > 3)
      {
        break;
      }
    }
  }
  if(b == 5)
  {
    for(int k = 0; k < 243 ; k++)
    {
      cout << c << d << e << f << g <<endl;
      g++;
      if(g > 3)
      {
        g = 1;
        f++;
      }


      if(f > 3 )
      {
        f= 1;
        e++;
      }

      if(e > 3)
      {
        e = 1;
        d++;
      }

      if(d > 3)
      {
        d = 1;
        c++;
      }

      if(g > 3 && f > 3 && e > 3 && d > 3 && c > 3)
      {
        break;
      }
    }
  }


  return 0;
}
