#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        ll n, x, y;
        cin >> n;

        if ((n == 1) || (n == 2)) {
            cout << 0 << endl;
        } else {
            if (n % 2 == 0) {
                cout << n/2 - 1 << endl;
            } else {
                cout << n/2 << endl;
            }
        }
    }
}