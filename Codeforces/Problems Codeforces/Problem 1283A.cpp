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
        int h, m;
        cin >> h >> m;

        int h1 = 24 - h;
        int m1 = 60 - m;
        if (m = 0) {
            m1 = 0;
        } else {
            h1 -= 1;
        }

        int total = (h1*60) + m1;
        cout << total << endl;
    }
}