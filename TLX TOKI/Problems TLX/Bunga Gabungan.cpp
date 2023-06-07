#include <iostream>

using namespace std;

int main() {
    int P{}, Q{};
    cin >> P >> Q;

    int bunga{};
    bunga = P*P + Q*Q + 1;

    if (bunga%4 == 0){
        cout << bunga/4 << "\n";
    } else {
        cout << -1 << endl;
    }

    return 0;
}