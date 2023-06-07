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
    int t;
    cin >> t;

    int miskha = 0;
    int chris = 0;
    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a > b) {
            miskha ++;
        } else if (a < b) {
            chris ++;
        }
    }

    if (miskha > chris) {
        cout << "Mishka" << endl;
    } else if (chris > miskha) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }
}