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
#define vii vector<int>
#define vll vector<long long>

// ASCII 'a' adalah 97
// ASCII 'A' adalah 65

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    /* Older USACO Problem Template
    freopen("problemname.in", "r", stdin);
	freopen("problemname.out", "w", stdout);
    */

    vii arr(7);
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    if ((arr[0] + arr[1]) == arr[2]) {
        cout << arr[0] << " " << arr[1] << " " << arr[3] << endl;
    } else {
        cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    }

    return 0;
}