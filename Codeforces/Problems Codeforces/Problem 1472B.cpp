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

    while(n--) {
        int x;
        cin >> x;

        int arr[x];
        for (int i = 0; i < x; i++) {
            cin >> arr[i];
        }

        int satu = 0;
        int dua = 0;
        for (int i = 0; i < x; i++) {
            if (arr[i] == 1) {
                satu++;
            } else {
                dua++;
            }
        }

        if ((satu > 0) && (satu % 2 == 0)) {
            cout << "YES" << endl;
        } else if ((satu == 0) && (dua % 2 == 0)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}