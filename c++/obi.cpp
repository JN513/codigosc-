#include <iostream>
using namespace std;

int main()
{
    int D;
    cin >> D;

    if(D <= 800){
        cout << 1 << endl;
    }

    if( 800 < D && D <= 1400){
        cout << 2 << endl;
    }

    if( 1400 < D && D <= 2000){
        cout << 3 << endl;
    }
}
