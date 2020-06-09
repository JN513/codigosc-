#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, x;
vector<int> ans;

int main() {
        scanf("%d %d", &n, &m);

        int last = -1;
        for (int i = 0; i < n; i++) {
                scanf("%d", &x);

                if (min(x, m-x) >= last) {
                        last = min(x, m-x);
                        ans.push_back(min(x, m-x));
                }
                else if (max(x, m-x) >= last) {
                        last = max(x, m-x);
                        ans.push_back(max(x, m-x));
                }
                else {
                        printf("-1\n");
                        return 0;
                }
        }

        long long res = 0;
        for (int i = 0; i < n; i++) {
                res += ans[i];
        }
        printf("%lld\n", res);
}
