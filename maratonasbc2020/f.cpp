#include <bits/stdc++.h>

using namespace std;

string s;
int p1, g1, p2, g2, saca = 1;

int main(void){
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if(s[i] == 'S'){
            if(saca == 1){
                p1 ++;
                if(p1 >= 5){
                    if(p1 >= p2+2 or p1 == 10){
                        g1++;
                        p1 = 0; p2 = 0;
                    }
                }
            }else{
                p2 ++;
                if(p2 >= 5){
                    if(p2 >= p1+2 or p2 == 10){
                        g2++;
                        p1 = 0; p2 = 0;
                    }
                }
            }
        }else if(s[i] == 'R'){
            if(saca == 1){
                saca = 2;
                p2 ++;
                if(p2 >= 5){
                    if(p2 >= p1+2 or p2 == 10){
                        g2++;
                        p1 = 0; p2 = 0;
                    }
                }
            }else{
                saca = 1;
                p1++;
                if(p1 >= 5){
                    if(p1 >= p2+2 or p1 == 10){
                        g1++;
                        p1 = 0; p2 = 0;
                    }
                }
            }

        }else if(s[i] == 'Q'){
            if(g1 > g2 and g1 >=2) printf("%d (winner) - %d\n",g1,g2);
            else if(g2 > g1 and g2 >= 2) printf("%d - %d (winner)\n",g1,g2);
            else{
                if(saca == 2) printf("%d (%d) - %d (%d*)\n",g1,p1,g2,p2);
                else printf("%d (%d*) - %d (%d)\n",g1,p1,g2,p2);
            }
        }
    }

    return 0;
}