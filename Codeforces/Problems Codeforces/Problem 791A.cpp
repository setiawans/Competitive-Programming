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
    int a, b;
    cin >> a >> b;
    int year = 0;

    for (int i = 1; i > 0; i++) {
        a *= 3;
        b *= 2;
        year ++;

        if (a > b) {
            break;
        }
    }

    cout << year << endl;
}