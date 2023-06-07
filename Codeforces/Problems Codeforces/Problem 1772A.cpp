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
    int s;
    cin >> s;

    while(s--) {
        string a;
        cin >> a;
        cout << (a[0] + a[2])-96 << endl;
    }
}