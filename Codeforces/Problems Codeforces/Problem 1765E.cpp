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
        int n, a, b;
        cin >> n >> a >> b;

        if (a <= b) {
            if (n % a == 0) {
                cout << n/a << endl;
            } else {
                cout << n/a + 1 << endl;
            }
        } else {
            cout << 1 << endl;
        }
    }
}