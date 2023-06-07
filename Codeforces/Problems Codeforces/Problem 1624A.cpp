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

    while (n--) {
        int m;
        cin >> m;

        int arr[m];
        for (int i = 0; i < m; i++){
            cin >> arr[i];
        }

        int maks = 0;
        for (int i = 0; i < m; i++) {
            if (arr[i] >= maks) {
                maks = arr[i];
            }
        }

        int min = maks;
        for (int i = 0; i < m; i++) {
            if (arr[i] <= min) {
                min = arr[i];
            }
        }

        cout << maks - min << endl;
    }
}