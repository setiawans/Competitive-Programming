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
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        if ((a-b) == 0) {
            cout << 0 << endl;
        } else {
            if (abs(a-b) % 10 == 0) {
                cout << abs(a-b)/10 << endl;
            } else {
                cout << abs(a-b)/10 + 1 << endl;
            }
        }
    }
}