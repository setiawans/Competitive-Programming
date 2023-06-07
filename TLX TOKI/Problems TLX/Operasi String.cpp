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

using namespace std;

int main()
{
    string a, b, c, d;
    cin >> a >> b >> c >> d;

    int x = a.find(b);
    a.erase(x, b.length());

    int y = a.find(c);
    a.insert(y + c.length(), d);

    cout << a << endl;
}