#include <bits/stdc++.h>

using namespace std;

int n, k, v[100005], a, b;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++) cin >> v[i];
    
    cin >> k;

    for(int i = 0; i < n; i++)
    for(int j = i+1; j < n; j++)
        if(v[i] + v[j] == k){
            a = v[i];
            b = v[j];
            break;
        }            


    cout << a <<" "<< b<<endl;

    return 0;
}