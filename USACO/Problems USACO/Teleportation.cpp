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
    freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);
    
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int dist = abs(a-b);

    int min = a;
    int maks = b;

    if (a == b) {
        cout << 0 << endl;
        return 0;
    } else if (a > b) {
        min = b;
        maks = a;
    }

    int minT = x;
    int maksT = y;
    if (x > y) {
        minT = y;
        maksT = x;
    }

    int dist2 = abs(min - minT) + abs(maks - maksT);
    if (dist > dist2) {
        dist = dist2;
    }
    cout << dist << endl;
    return 0;
}