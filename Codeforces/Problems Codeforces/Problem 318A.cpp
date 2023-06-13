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
    ll x, y;
    cin >> x >> y;

    if (y <= (x+1)/2) {
        cout << 2*y - 1 << endl;
    } else {
        y -= (x+1)/2;
        cout << 2*y << endl;
    }
}