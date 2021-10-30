#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;
char *r = NULL;

int main(void){
    scanf("%d",&n);

    char s[n+1];

    scanf("%s",s);

    char temp[n+1];
    int temp_size = 0;
    map<char, int> m;
    map<char, int> z;


    for(int i = 1; i < n/2+1; i++){

        for (int j = 0; j < i; j++){
            temp[temp_size] = s[j];
            temp[temp_size+1] = '\0';
            temp_size++;
            if(m.find(s[j]) == m.end()){
                m[s[j]] = 1;
            } else {
                m[s[j]] = m[s[j]] + 1;
            }
        }

        bool ok = true;

        for (int j = i; j < n; j++){
            for(int k = j; k < j+temp_size; k++){
                if(z.find(s[k]) == z.end()){
                    z[s[k]] = 1;
                } else {
                    z[s[k]] = z[s[k]] + 1;
                }
            }

            j += temp_size-1;

            for(map<char, int> :: iterator it = m.begin(); it != m.end(); it++){
                if(z[it->first] != it->second){
                    ok = false;
                    break;
                }
            }

            z.clear();
        }

        if(ok){
            r = temp;
            break;
        }

        m.clear();
        temp[0] = '\0';
        temp_size = 0;
    }

    if(r == NULL){
        printf("*\n");
    } else {
        printf("%s\n",r);
    }

    return 0;
}