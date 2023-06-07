#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x % 5 == 0) {
        cout << x/5 << endl;
    } else {
        cout << (x/5) + 1 << endl;
    }
}