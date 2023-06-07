#include <iostream>

using namespace std;

int main() {
    int x{}, y{}, z{};
    cin >> x >> y >> z;

    for (int i = 0; i < y; i++) {
        cout << x << "\n";
        x += z;
    }
}