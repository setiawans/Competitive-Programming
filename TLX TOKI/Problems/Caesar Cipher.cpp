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

using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] + n > 'z') {
            s[i] = s[i] + n - 26;
        } else {
            s[i] = s[i] + n;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
    }
}