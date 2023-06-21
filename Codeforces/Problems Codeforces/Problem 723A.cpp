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
    ios_base::sync_with_stdio(false); cin.tie(0);
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr+3);
    cout << arr[2] - arr[0] << endl;
}