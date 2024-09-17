#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> n(4);
    cin >> n[0] >> n[1] >> n[2] >> n[3];
    vector<int> ignore;
    int ans = 0;
    for (int i = 0; i < 4; i++) {
        int cnt = count(n.begin(), n.end(), n[i]);
        int ignore_cnt = count(ignore.begin(), ignore.end(), n[i]);
        if (cnt > 1 && ignore_cnt == 0) {
            ignore.push_back(n[i]);
            ans += cnt - 1;
        }
    }
    cout << ans;
    return 0;
}
