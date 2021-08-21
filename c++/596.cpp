#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, t;
pair <int,int> v[100005];

int main(void){

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &n);

        for(int j = 0; j < n; j++){
            int a;

            scanf("%d", &a);

            v[j] = {a, j};
        }

        sort(v, v+n, [](pair <int,int> a, pair <int,int> b){
            if(a.first == b.first) return a.second < b.second;
            else return a.first < b.first;
        });

        for(int j = 0; j < n; j++) {
            if(j == 0){
                printf("%d", v[j].second+1);
            } else if(v[j].first == v[j-1].first){
                printf("%d", v[j].second+1);
            } else {
                break;
            }

            printf(" ");
        }

        //if(i < t-1) 
        printf("\n");
    }

    return 0;
}