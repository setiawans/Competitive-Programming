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
    
    int ret = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            ret++;
        }
    }

    cout << ret << endl;
}