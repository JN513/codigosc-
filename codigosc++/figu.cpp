#include <iostream>
using namespace std;

int main(){
    int N,M,X;
    int album[105];

    cin >> N >> M;
    for(int i = 1; i <= N;i++){
        album[i] = 0;
    }
    for(int i=0;i<M;i++){
        cin >> X;
        album[ X ] = 1;
    }
    int resposta = 0;
    for(int i = 1; i <= N; i++){
        if( album[i]==0 ){
            resposta++;
        }
    }
    cout << resposta << endl;
}