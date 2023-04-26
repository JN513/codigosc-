#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    while (n != 0)
    {
        stack<int> st1;
        vector<int> popd;

        for (int i = n; i > 0; i--)
        {
            st1.push(i);
        }

        while (st1.size() > 1)
        {
            popd.push_back(st1.top());
            st1.pop();

            stack <int> rs, temp;
            rs.push(st1.top());
            st1.pop();
            while(!st1.empty()){
                temp.push(st1.top());
                st1.pop();
            }

            while (!temp.empty())
            {
                rs.push(temp.top());
                temp.pop();
            }

            st1 = rs;
        }

        cout << "Discarded cards: ";

        for (int i = 0; i < popd.size(); i++)
        {
            if(i != popd.size() - 1){
                cout << popd[i] << ", ";
            } else {
                cout << popd[i] << "\n";
            }
        }

        cout << "Remaining card: " << st1.top() << endl;

        cin >> n;
    }

    return 0;
}