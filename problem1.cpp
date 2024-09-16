#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    if (n > INT_MIN + 1 && n < INT_MAX) cout << "YES";
    else cout << "NO";
    return 0;
}
