#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    float v;
    cin>>x>>y;
    if (x==1)
        v=y*4.00;
    else if (x==2)
        v=y*4.50;
    else if (x==3)
        v=y*5.00;
    else if (x==4)
        v=y*2.00;
    else if (x==5)
        v=y*1.50;
    else{
        cout<<"Valor Invalido\n";
    }
    cout<<setprecision(2)<<fixed;
    cout<<"Total: R$ "<<v << endl;
    return 0;
}
