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

    int temp;
    if (n % 5000 != 0) {
        temp = n/5000 + 1;
    } else {
        temp = n/5000;
    }

    cout << temp * 5000 << endl;
}