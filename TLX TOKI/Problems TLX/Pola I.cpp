#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N{}, K{};
    cin >> N >> K;

    int angka[N];
    for (int i = 0; i < N; i++) {
        angka[i] = i + 1;
    }

    for (int i = 0; i < N; i++) {
        if (angka[i] % K == 0) {
            cout << " * ";
        } else {
            cout << " " << angka[i] << " ";
        }
    }

    return 0;
}