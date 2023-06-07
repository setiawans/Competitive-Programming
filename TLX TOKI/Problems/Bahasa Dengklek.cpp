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
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] - 'a' >= 0) {
            s[i] -= 'a' - 'A';
        } else {
            s[i] += 'a' - 'A';
        }
    }

    cout << s << endl;
}