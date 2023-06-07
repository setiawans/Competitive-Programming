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
    ll t;
    cin >> t;
    while (t--) {
        ll x, y, n;
        cin >> x >> y >> n;
        
        if (n % x == y) {
            cout << n << endl;
        } else if (n - n % x + y <= n) {
            cout << n - n % x + y << endl;
        } else {
            cout << n - n % x - x + y << endl;
        }
    }
}

// sources : https://codeforces.com/problemset/problem/1374/A