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

    string z = "314159265358979323846264338327";

    while(t--) {
        string n;
        cin >> n;

        int digit = 0;
        for (int i = 0; i < 30; i++) {
            if (n[i] != z[i]) {
                break;
            } else {
                digit++;
            }
        }

        cout << digit << endl;
    }
}