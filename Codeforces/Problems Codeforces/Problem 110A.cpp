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
    string n;
    cin >> n;

    int n_length = n.length();
    bool isLucky;
    int temp = 0;

    for (int i = 0; i < n_length; i++) {
        if ((n[i] == '4') || (n[i] == '7')) {
            temp++;
        }
    }

    if (temp == 0) {
        isLucky = false;
    } else if ((temp == 4) || (temp == 7)) {
        isLucky = true;
    } else {
        isLucky = false;
    }

    if (isLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
} 