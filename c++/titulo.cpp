#include <iostream>

using namespace std;

string title(string F){
    for(int j = 0; j < F.size(); j++){
        if ((F[j-1] == ' ' || j == 0) && F[j] > 'Z') F[j] -= 'a' - 'A';
        else if(F[j-1] != ' ' && F[j] != ' ' && j > 0 && F[j] < 'a') F[j] += 'a' - 'A';
    }
    return F;
}


int main(){
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}
