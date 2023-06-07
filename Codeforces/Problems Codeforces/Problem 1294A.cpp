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
    int n;
    cin >> n;

    while(n--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int maks;
        if (a >= b) {
            if (a >= c) {
                maks = a;
            } else {
                maks = c;
            }
        } else {
            if (b >= c) {
                maks = b;
            } else {
                maks = c;
            }
        }

        int selA = maks - a;
        int selB = maks - b;
        int selC = maks - c;
        int total = selA + selB + selC;
        int hasil = n - total;

        if (hasil < 0) {
            cout << "NO" << endl;
        } else if (hasil % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}