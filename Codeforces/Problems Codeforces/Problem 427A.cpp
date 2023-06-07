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

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int police = 0;
    int cases = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) {
            if (police > 0) {
                police --;
            } else {
                cases ++;
            }
        } else {
            police += arr[i];
        }
    }

    cout << cases << endl;
}