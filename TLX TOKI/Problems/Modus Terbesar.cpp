#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[1001];
    int modus = 1;

    for (int i = 0; i < 1001; i++) {
        b[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }

    for (int i = 1; i < 1001; i++) {
        if (b[modus] <= b[i]) {
            modus = i;
        }
    }

    cout << modus << endl;
}