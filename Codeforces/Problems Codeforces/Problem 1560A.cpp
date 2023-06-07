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
        int x;
        cin >> x;
        int temp = 0;
        for (int i = 1; i > 0; i++) {
            if (i % 3 == 0 || i % 10 == 3) {
                continue;
            } else {
                temp++;
            }

            if (temp == x) {
                cout << i << endl;
                break;
            }
        }
    }
}