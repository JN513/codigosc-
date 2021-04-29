#include <iostream>

using namespace std;

bool eh_primo(int x){
    int div = 0;
    for(int i = 1; i <= x/2; i++) {
        if(div > 1) return false;
        if(x % i == 0) div++;
    }

    if(div == 1)return true;
    if(div > 1) return false;
}

int main(int argc, char *argv[]){
	int x;

    if(argc > 1){
        x = atoi(argv[1]);
    }else{
        cin >> x;
    }

	if(eh_primo(x)) cout << "S" << "\n";
	else cout << "N" << "\n";

	return 0;
}
