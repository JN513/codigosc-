#include <bits/stdc++.h>

using namespace std;

int n, casa[100][100];

int main(void){
    cin >> n;

    for(int i=1; i<=n; i++){
		int d, l, r, c; cin >> d >> l >> r >> c;
		if(d==0){
			for(int coluna=c; coluna<=c+l-1; coluna++){
				casa[r][coluna]++;
				if(casa[r][coluna]>1 or coluna<1 or coluna>10){
					cout << "N\n";
					return 0;
				}
			}
		}
		else{
			for(int linha=r; linha<=r+l-1; linha++){
				casa[linha][c]++;
				if(casa[linha][c]>1 or linha<1 or linha>10){
					cout << "N\n";
					return 0;
				}
			}
		}
	}
	cout << "Y\n";
    return 0;
}