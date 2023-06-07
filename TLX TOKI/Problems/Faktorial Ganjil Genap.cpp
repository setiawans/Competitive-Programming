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

int faktorial(int x) {
    if (x == 1) {
        return 1;
    } else {
        if (x % 2 == 0) {
            return x/2 * faktorial(x-1);
        } else {
            return x * faktorial(x-1);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    cout << faktorial(n) << endl;
}