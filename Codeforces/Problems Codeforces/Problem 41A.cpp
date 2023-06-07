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
    string x, y;
    cin >> x;
    cin >> y;
    bool isSame = true;
    int length = x.length();
    int length2 = y.length();
    
    if (length != length2) {
        isSame = false;
    }
    
    for (int i = 0; i < length; i++) {
        if (x[i] != y[length - i - 1]) {
            isSame = false;
        }
    }

    if (isSame) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}