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
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    sort(arr,arr+4);
    int a, b, c;
    for (int i = 1; i < arr[1]; i++) {
        a = i;
        b = arr[1] - a;
        c = arr[2] - b;
        if ((a + b + c) == arr[3]) {
            cout << a << " " << b << " " << c << endl;
            break;
        }
    }
}