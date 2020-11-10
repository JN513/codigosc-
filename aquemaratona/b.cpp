#include <iostream>

using namespace std;

int fat[10000], n, r, x, fats;

int main(void){
    cin >> n;

    fat[1] = 1;

    for (int i = 2; i < n; i ++){
        fat[i] = i*fat[i-1];
        fats++;
        if(fat[i] >= n) break; 
    }
    while (x < n){
        for (int i = fats; i >= 1; i--){
            while(true){
                if(x+fat[i] <=n) {
                    x+= fat[i];
                    r++;
                }
                else break;
            }
        }
    }

    cout << r<<endl;

    return 0;
}