#include <iostream>
using namespace std;
int main() {
    char sex;
    float length;
    cin >> sex >> length;
    if (sex == 'M') {
        if (length < 1.7) cout << "Short";
        else if (length < 1.85) cout << "Normal";
        else cout << "Tall";
    }
    else {
        if (length < 1.6) cout << "Short";
        else if (length < 1.75) cout << "Normal";
        else cout << "Tall";
    }
    return 0;
}
