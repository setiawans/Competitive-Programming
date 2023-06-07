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
    string s, t;
    cin >> s >> t;

    while (s.find(t) != -1) {
        int x = s.find(t);
        s.erase(x, t.length());
    }

    cout << s << endl;
}