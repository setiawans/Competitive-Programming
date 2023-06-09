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
    while (t--) {
        ll n;
        cin >> n;

        if (n % 3 == 0) {
            cout << n/3 << " " << n/3 << endl;
        } else if (n % 3 == 1) {
            cout << n/3 + 1 << " " << n/3 << endl;
        } else {
            cout << n/3 << " " << n/3+1 << endl;
        }
    }
}

// sources : https://codeforces.com/blog/entry/93149