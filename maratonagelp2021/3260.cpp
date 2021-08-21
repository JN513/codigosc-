#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

double get_dist(int xa, int xb, int ya, int yb){
    double temp = ((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb));

    return pow(temp, 0.5);
}

int main(void){
    int n;
    vector <pair <double,double>> v;
    double dist = 0.0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int a, b;

        scanf("%d", &a);
        scanf("%d", &b);

        if(v.size() >= 2){
            double fd = (double)sqrt( pow(v[0].first - a, 2) + pow(v[0].second - b, 2) );
            double sd = (double)sqrt( pow(v[1].first - a, 2) + pow(v[1].second - b, 2) );

            if(fd > sd) {
                v[1].first = a;
                v[1].second = b;
                dist = fd;
            } else {
                v[0].first = a;
                v[0].second = b;
                dist = sd;
            }
        } else{
            v.push_back({a, b});
        }

        if(v.size() == 2){
            dist = get_dist(v[1].first, v[0].first, v[0].second, v[1].second);
        }
    }

    printf("%.8lf\n",dist);

    return 0;
}