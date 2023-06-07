#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N{};
    cin >> N;

    int bebek[N];

    for (int i = 0; i < N; i++) {
        cin >> bebek[i];
    }

    int jumlah_bebek = 0;
    for (int i = 0; i < N; i++) {
        jumlah_bebek = jumlah_bebek + bebek[i];
    }

    cout << jumlah_bebek;

    return 0;
}