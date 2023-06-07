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
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << endl;
        } else if (a < b) {
            if ((b - a) % 2 != 0) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        } else {
            if ((a - b) % 2 != 0) {
                cout << 2 << endl;
            } else {
                cout << 1 << endl;
            }
        }
    }
} 