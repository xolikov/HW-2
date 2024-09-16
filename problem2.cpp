#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a) cout << "Bus";
    else if (b) cout << "Walk";
    else cout << "Bike";
    return 0;
}
