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

    int maks = 0;
    int jumlah;
    int total = 0;
    while(t--) {
        int a, b;
        cin >> a >> b;

        jumlah = b - a;
        total += jumlah;

        if (total >= maks) {
            maks = total;
        }
    }

    cout << maks << endl;
}