#include <bits/stdc++.h>

using namespace std;

vector<int> elements;
vector<char> op;

void make_vectors(string x)
{
    string substr = "";

    for (int i = 0; i < (int)x.size(); i++)
    {
        if (x[i] != '+' and x[i] != '-' and x[i] != '*' and x[i] != '/')
        {
            substr += x[i];
        }
        else
        {
            if (substr != "")
            {
                int k = stoi(substr);
                substr = "";
                elements.push_back(k);
                op.push_back(x[i]);
            }
        }
    }

    int k = stoi(substr);
    elements.push_back(k);
}

void solve()
{
    for (int i = 0; i < (int)op.size(); i++)
    {
        if (op[i] == '*')
        {
            int r = elements[i] * elements[i + 1];

            op.erase(op.begin() + i);
            elements[i] = r;
            elements.erase(elements.begin() + i + 1);
            i--;
        }
        else if (op[i] == '/')
        {
            int r = elements[i] / elements[i + 1];

            op.erase(op.begin() + i);
            elements[i] = r;
            elements.erase(elements.begin() + i + 1);
            i--;
        }
    }

    for (int i = 0; i < (int)op.size(); i++)
    {
        if (op[i] == '+')
        {
            int r = elements[i] + elements[i + 1];

            op.erase(op.begin() + i);
            elements[i] = r;
            elements.erase(elements.begin() + i + 1);
            i--;
        }
        else if (op[i] == '-')
        {
            int r = elements[i] - elements[i + 1];

            op.erase(op.begin() + i);
            elements[i] = r;
            elements.erase(elements.begin() + i + 1);
            i--;
        }
    }
}

int main(void)
{
    string s, sclean;

    cin >> s;

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] != 'k')

        {
            sclean += s[i];
        }
    }

    make_vectors(sclean);
    solve();

    cout << elements[0] << endl;

    return 0;
}