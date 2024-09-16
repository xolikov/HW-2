#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n > -2147483647 && n < 2147483647) cout << "YES";
    else cout << "NO";
    return 0;
}
