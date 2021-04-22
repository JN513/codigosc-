#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;

int main(void){
    while(scanf("%d",&n) != EOF){
        int m, l;
        scanf("%d%d",&m,&l);

        vector <int> ma[101];
        vector <int> le[101];

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int a;
                scanf("%d",&a);
                ma[i].push_back(a);
            }
        }

        for(int i = 0; i < l; i++){
            for(int j = 0; j < n; j++){
                int a;
                scanf("%d",&a);
                le[i].push_back(a);
            }
        }

        int sm, sl;
        int at;

        scanf("%d%d%d",&sm,&sl,&at);

        if(ma[sm-1][at-1] > le[sl-1][at-1]) printf("Marcos\n");
        else if(le[sm-1][at-1] > ma[sl-1][at-1]) printf("Leonardo\n");
        else printf("Empate\n");
    }


    return 0;
}