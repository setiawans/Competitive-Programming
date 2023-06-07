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
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x, y;
        int total = 0;
        cin >> x >> y;

        if (x % y == 0) {
            cout << total << endl;
        } else {
            total = y - x%y;
            cout << total << endl;
        }
    }  
}