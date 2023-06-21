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
    int a, b;
    cin >> a >> b;
    int c = a % 10;

    for (int i = 1; i > 0; i++) {
        c *= i;
        c = c % 10;

        if ((c == 0) || (c == b)) {
            cout << i << endl;
            break;
        }
        
        c = a % 10;
    }
}