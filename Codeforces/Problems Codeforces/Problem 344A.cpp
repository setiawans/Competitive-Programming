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

    string arr[t];
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int ret = 1;
    for (int i = 0; i < t-1; i++) {
        if (arr[i] != arr[i+1]) {
            ret++;
        }
    }

    cout << ret << endl;
}