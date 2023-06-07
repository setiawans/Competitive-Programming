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

    int i = 1;
    while (n--) {
        int x;
        cin >> x;

        if (i == x) {
            i++;
        } else {
            cout << i << endl;
            break;
        }
    }
}