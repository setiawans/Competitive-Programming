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
    ull a, b;
    cin >> a >> b;

    if (b == 1) {
        cout << a-1 << endl;
    } else {
        cout << a * (b-1) << endl;
    }
}