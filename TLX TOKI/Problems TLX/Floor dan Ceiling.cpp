#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double N{};
    int F{}, C{};
    cin >> N;
    
    int cek{};
    cek = N;

    if (N == cek) {
        F = N;
        C = F;
    } else if (N > 0) {
        F = N;
        C = F + 1;
    } else {
        C = N;
        F = C - 1;
    }

    cout << F << " " << C << endl;

    return 0;
}