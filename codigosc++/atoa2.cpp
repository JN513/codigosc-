#include<bits/stdc++.h>
using namespace std;


int main(){
    int N, M, V[10010], K[10010], i, soma=0, j=0;
    cin>>N>>M;
    memset(V, 0, sizeof(V));

    for(i=1;i<=N;i++){
        cin>>V[i];
        K[i]=V[i];
    }

    for(i=N;i>=1;i--){

        if(V[i]>=V[i-1])
            soma=soma+V[i];

        else{

            if(M-V[i]>=V[i-1]){
                soma=soma+M-V[i];
                V[i]=M-V[i];
            }

            else{
                V[i-1]=M-V[i-1];
                soma=soma+V[i];
                V[i]=M-V[i];
            }
        }

    }

    for(i=N;i>=1;i--)
        if(V[i]<V[i-1])
            j=-1;

    if(j==-1){
        K[N]=M-K[N];
        j=0;
        soma=0;

        for(i=N;i>=1;i--){

        if(K[i]>=K[i-1])
            soma=soma+K[i];

        else{

            if(M-K[i]>=K[i-1]){
                soma=soma+M-K[i];
                K[i]=M-K[i];
            }

            else{
                K[i-1]=M-K[i-1];
                soma=soma+K[i];
                K[i]=M-K[i];
            }
        }

    }

    for(i=N;i>=1;i--)
        if(K[i]<K[i-1])
            j=-1;
    }

    if(j==0)
    cout<<soma<<endl;

    else
    cout<<"-1"<<endl;

	return 0;
}
