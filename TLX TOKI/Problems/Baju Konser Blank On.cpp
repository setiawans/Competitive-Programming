#include <iostream>

using namespace std;

int main() {
    int b{}, p{}, lb{};
    cin >> b >> p >> lb;

    if(b <= 10 && p <= 40 && lb <= 90){
        cout << "S";
    } else if (b <= 14 && p <= 60 && lb <= 120) {
        cout << "M";
    } else if (b <= 18 && p <= 80 && lb <= 180) {
        cout << "L";
    } else {
        cout << "X";
    }
}