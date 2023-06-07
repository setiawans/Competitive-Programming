#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

// Library C
#include <cstdio>
#include <cstring>

#define ll long long
#define ull unsigned long long

// ASCII 'a' adalah 97
// ASCII 'A' adalah 65

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        int butuX, butuY;
        if (x > a) {
            butuX = x - a;
        } else {
            butuX = 0;
        }

        if (y > b) {
            butuY = y - b;
        } else {
            butuY = 0;
        }

        if (butuX + butuY > c) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}