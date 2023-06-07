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
        int a, b, c;
        cin >> a >> b >> c;

        int jarak1 = abs(a-1);
        int jarak2 = abs(b-c) + abs(c-1);

        if (jarak1 == jarak2) {
            cout << 3 << endl;
        } else if (jarak1 < jarak2) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}