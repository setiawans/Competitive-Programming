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
        int x, y;
        cin >> x >> y;

        if ((x < y) || (x%y != 0)) {
            cout << 1 << endl;
            cout << x << endl;
        } else {
            cout << 2 << endl;
            for (int i = x; i > 0; i--) {
                if (i % y != 0) {
                    if ((x-i) % y != 0) {
                        cout << i << " " << x-i << endl;
                        break;
                    }
                }
            }
        }
    }
}