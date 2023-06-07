#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int A{}, X{};
    cin >> A >> X;

    int maj{}, netim{};
    maj = X/A;
    netim = X - (maj*A);
    cout << maj << "\n" << netim << endl;

    return 0;
}