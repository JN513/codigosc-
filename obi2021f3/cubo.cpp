#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int a, b, r;

double n_sqrt(double x) {
    if (x <= 0)
        return 0;       // if negative number throw an exception?
    int exp = 0;
    x = frexp(x, &exp); // extract binary exponent from x
    if (exp & 1) {      // we want exponent to be even
        exp--;
        x *= 2;
    }
    double y = (1+x)/2; // first approximation
    double z = 0;
    while (y != z) {    // yes, we CAN compare doubles here!
        z = y;
        y = (y + x/y) / 2;
    }
    return ldexp(y, exp/2); // multiply answer by 2^(exp/2)
}

bool tem_raiz(int x) {
    if(x < 0 or (x&2) or ((x & 7) == 5) or ((x & 11) == 8)) return false;

    double raiz_quad = n_sqrt(x);

    return abs(raiz_quad-(double)ceil(raiz_quad)) < 0.0001;
}

bool tem_raiz_cub(int x){
    
    if(x == 8 or x == 27 or x == 64 or x == 125 or x == 216 or x == 343 or x == 512 or x == 729 or x == 1000 or x == 1331 or x == 1728 or x == 2197 or x == 2744 or x == 3375 or x == 4096 or x == 4913 or x == 5832 or x == 6859
        or x == 8000 or x == 9261 or x == 10648 or x == 12167 or x == 13824 or x == 15625  or x == 17576 or x == 19683 or x == 21952 or x == 24389 or x == 27000 or x == 29791 or x == 32768 or x == 35937 or x == 39304 or x == 42875 or x == 46656 or x == 50653 or x == 54872 or x == 59319
        or x == 64000 or x == 68921 or x == 74088 or x == 79507 or x == 85184 or x == 91125 or x == 97336 or x == 103823 or x == 110592 or x == 117649 or x == 125000 or x == 132651 or x == 140608 or x == 148877 or x == 157464 or x == 166375 or x == 175616 or x == 185193 or x == 195112 or x == 205379
        or x == 216000 or x == 226981 or x == 238328 or x == 250047 or x == 262144 or x == 274625 or x == 287496 or x == 300763 or x == 314432 or x == 328509 or x == 343000 or x == 357911 or x == 373248 or x == 389017 or x == 405224 or x == 421875 or x == 438976 or x == 456533 or x == 474552 or x == 493039
        or x == 512000 or x == 531441 or x == 551368 or x == 571787 or x == 592704 or x == 614125 or x == 636056 or x == 658503 or x == 681472 or x == 704969 or x == 729000 or x == 753571 or x == 778688 or x == 804357 or x == 830584 or x == 857375 or x == 884736 or x == 912673 or x == 941192 or x == 970299
        or x == 1000000 or x == 1030301 or x == 1061208 or x == 1092727 or x == 1124864 or x == 1157625 or x == 1191016 or x == 1225043 or x == 1259712 or x == 1295029 or x == 1331000 or x == 1367631 or x == 1404928 or x == 1442897 or x == 1481544 or x == 1520875 or x == 1560896 or x == 1601613 or x == 1643032 or x == 1685159
        or x == 1728000 or x == 1771561 or x == 1815848 or x == 1860867 or x == 1906624 or x == 1953125 or x == 2000376 or x == 2048383 or x == 2097152 or x == 2146689 or x == 2197000 or x == 2248091 or x == 2299968 or x == 2352637 or x == 2406104 or x == 2460375 or x == 2515456 or x == 2571353 or x == 2628072 or x == 2685619
        or x == 2744000 or x == 2803221 or x == 2863288 or x == 2924207 or x == 2985984 or x == 3048625 or x == 3112136 or x == 3176523 or x == 3241792 or x == 3307949 or x == 3375000 or x == 3442951 or x == 3511808 or x == 3581577 or x == 3652264 or x == 3723875 or x == 3796416 or x == 3869893 or x == 3944312 or x == 4019679
        or x == 4096000 or x == 4173281 or x == 4251528 or x == 4330747 or x == 4410944 or x == 4492125 or x == 4574296 or x == 4657463 or x == 4741632 or x == 4826809 or x == 4913000 or x == 5000211 or x == 5088448 or x == 5177717 or x == 5268024 or x == 5359375 or x == 5451776 or x == 5545233 or x == 5639752 or x == 5735339
        or x == 5832000 or x == 5929741 or x == 6028568 or x == 6128487 or x == 6229504 or x == 6331625 or x == 6434856 or x == 6539203 or x == 6644672 or x == 6751269 or x == 6859000 or x == 6967871 or x == 7077888 or x == 7189057 or x == 7301384 or x == 7414875 or x == 7529536 or x == 7645373 or x == 7762392 or x == 7880599
        or x == 8000000 or x == 8120601 or x == 8242408 or x == 8365427 or x == 8489664 or x == 8615125 or x == 8741816 or x == 8869743 or x == 8998912 or x == 9129329 or x == 9261000 or x == 9393931 or x == 9528128 or x == 9663597 or x == 9800344 or x == 9938375 or x == 10077696 or x == 10218313 or x == 10360232 or x == 10503459
    ) return true;

    return false;
}

int main(void){
    scanf("%d%d", &a, &b);

    for(int i = a; i <= b; i++){
        if(tem_raiz(i) and tem_raiz_cub(i)){
            r++;
        }
    }

    printf("%d\n", r);

    return 0;
}