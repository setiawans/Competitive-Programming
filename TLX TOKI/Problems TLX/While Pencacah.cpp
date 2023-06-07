#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x{};
    int jumlah = 0;

    while(cin >> x) {
        jumlah += x;
    }

    cout << jumlah << endl;

    return 0;
}