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
    string a, b;
    cin >> a;
    cin >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower); // Learn about this transform function
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if (a == b) {
        cout << 0 << endl;
    } else if (a < b) {
        cout << -1 << endl;
    } else {
        cout << 1 << endl;
    }
}

// Source : https://codeforces.com/problemset/problem/112/A