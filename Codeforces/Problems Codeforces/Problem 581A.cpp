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
    int a, b;
    cin >> a >> b;

    int min;
    if (a <= b) {
        min = a;
    } else {
        min = b;
    }

    int temp = 0;
    for (int i = 0; i < min; i++) {
        temp++;
        a--;
        b--;
    }

    if (a + b == 0 || a + b == 1) {
        cout << temp << " " << 0 << endl;
    } else {
        cout << temp << " " << (a+b)/2 << endl;
    }
}