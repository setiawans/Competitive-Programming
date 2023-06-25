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
    freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
    
    int a, b;
    cin >> a >> b;

    int c, d;
    cin >> c >> d;

    vector<bool> cover(100);
    for (int i = a; i < b; i++) {
        cover[i] = true;
    }

    for (int i = c; i < d; i++) {
        cover[i] = true;
    }

    int count = 0;
    for (int i = 0; i < cover.size(); i++) {
        if (cover[i] == true) {
            count ++;
        }
    }

    cout << count << endl;
}