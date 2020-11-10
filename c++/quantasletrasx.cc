#include <iostream>

using namespace std;

int main(){
    string s;
    char x;
    int r = 0;

    cin >> s;
    cin >> x;
    
    for (int i = 0; i < s.size(); i++) if (s[i] == x) r++;

    cout << r << endl;

    return 0;
}