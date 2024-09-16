#include <iostream>
using namespace std;
int main() {
    long int n;
    cin >> n;
    if (n > INT_MIN && n < INT_MAX) cout << "YES";
    else cout << "NO";
    return 0;
}
