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
    int year, a, b, c, d;
    cin >> year;
    year += 1;

    while ((a == b) || (a == c) || (a == d) || (b == c) || (b == d) || (c == d)) {
        a = year/1000;
        b = (year - a*1000)/100;
        c = (year - a*1000 - b*100)/10;
        d = year % 10;
        if (!((a == b) || (a == c) || (a == d) || (b == c) || (b == d) || (c == d))) {
            break;
        }
        year ++;
    }

    cout << year << endl;
}

// source : https://codeforces.com/problemset/problem/271/A