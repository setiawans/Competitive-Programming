#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A{}, B{}, C{}, D{};
    cin >> A >> B >> C >> D;

    int arrayHasil[] = {A,B,C};
    int n = sizeof(arrayHasil)/sizeof(arrayHasil[0]);

    if (D == 1){
        sort(arrayHasil, arrayHasil + n);
    } else {
        sort(arrayHasil, arrayHasil + n, greater<int>());
    }

    for (int i = 0; i < 3; i++) {
        cout << arrayHasil[i] << " ";
    }

    return 0;
}