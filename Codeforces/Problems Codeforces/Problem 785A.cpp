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
    int ret = 0;
    while (t--) {
        string x;
        cin >> x;
        if (x == "Tetrahedron") {
            ret += 4;
        } else if (x == "Cube") {
            ret += 6;
        } else if (x == "Octahedron") {
            ret += 8;
        } else if (x == "Dodecahedron") {
            ret += 12;
        } else {
            ret += 20;
        }
    }

    cout << ret << endl;
}