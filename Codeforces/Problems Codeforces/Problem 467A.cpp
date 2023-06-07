#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    int x;
    cin >> x;
    int jumlah = 0;

    for (int i = 0; i < x; i++) {
        int y, z;
        cin >> y >> z;

        if (y+2 <= z) {
            jumlah++;
        }
    }

    cout << jumlah << endl;
}