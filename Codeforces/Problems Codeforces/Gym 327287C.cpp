#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iterator>
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

    reverse(arr, arr+n);

    int x;
    cin >> x;

    for (int i = 0; i < x; i++) {
        cout << arr[i];
        if (i != x-1) {
            cout << " ";
        }
    }
    cout << endl;
}