#include <bits/stdc++.h>

using namespace std;

int n, v[10005];

void antes(int x){
	for(int i = x-1; i >= 0 ; i--){ 
		if(v[i] == -1 or v[i] > v[i+1]+1) {
			if(v[i+1] == 9) v[i] = 9;
			else v[i] = v[i+1]+1;
		}
		else if(v[i] <= v[i+1]+1) break;
	} 
}

void depois(int x){
	for(int i = x+1; i < n; i++){
		if(v[i] > v[i-1]+1 or v[i] == -1) {
			if(v[i-1] == 9) v[i] = 9;
			else v[i] = v[i-1]+1;
		}
		else if(v[i] <= v[i-1]+1 or v[i] == 0) break; 
	}
}

int main(void){
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> v[i];

	for (int i = 0; i < n; ++i){
		if(v[i] == 0){
			antes(i);
			depois(i);
		}
	}

	for (int i = 0; i < n; ++i) cout << v[i] << " ";
	cout << endl;
}
