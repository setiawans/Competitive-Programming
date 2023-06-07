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

    while(t--) {
        int n;
        cin >> n;

        int arr[2*n];
        for (int i = 0; i < 2*n; i++) {
            cin >> arr[i];
        }

        int odd = 0;
        int even = 0;

        for (int i = 0; i < 2*n; i++) {
            if(arr[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        if (odd == even) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}