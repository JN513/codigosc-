#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();

map<string, string> dic = {
        { "a", "2" },
        { "b", "22" },
        { "c", "222" },

        { "d", "3" },
        { "e", "33" },
        { "f", "333" },

        { "g", "4" },
        { "h", "44" },
        { "i", "444" },

        { "j", "5" },
        { "k", "55" },
        { "l", "555" },

        { "m", "6" },
        { "n", "66" },
        { "o", "666" },

        { "p", "7" },
        { "q", "77" },
        { "r", "777" },
        { "s", "7777" },

        { "t", "8" },
        { "u", "88" },
        { "v", "888" },

        { "w", "9" },
        { "x", "99" },
        { "y", "999" },
        { "z", "9999" },

        { " ", "0" },
};

  for(int i = 0; i < n; i++) {
    string m = "", r = "";
    getline(cin, m);

    for(int k = 0; k < m.size(); k++) {
        if(isupper(m[k])) {
          r += "#";
        }

        string f(1, tolower(m[k]));
        string n = dic[f];

        if(r.size() > 1) {
          if(r[r.size() - 1] == n[0])
            r += "*";
        }

        r += n;
    }
    cout << r << endl;
  }
}
