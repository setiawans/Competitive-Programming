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
#define vii vector<int>
#define vll vector<long long>
#define vss vector<string>
#define pb push_back

// ASCII 'a' adalah 97
// ASCII 'A' adalah 65

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);

    vii limit(100);
    vii bessie(100);

    int x, y;
    cin >> x >> y;

    int length, speed;
    int position = 1;
    for (int i = 0; i < x; i++) {
        cin >> length >> speed;

        for (int j = position; j <= position + length; j++) {
            limit[j] = speed;
        }
        position += length;
    }

    position = 1;
    for (int i = 0; i < y; i++) {
        cin >> length >> speed;

        for (int j = position; j <= position + length; j++) {
            bessie[j] = speed;
        }
        position += length;
    }

    int worst = 0;
    for (int i = 1; i <= 100; i++) {
        if (bessie[i] >= limit[i]) {
            if ((bessie[i] - limit[i]) > worst) {
                worst = bessie[i] - limit[i];
            }
        }
    }

    cout << worst << endl;
}

// http://www.usaco.org/index.php?page=viewproblem2&cpid=568
// https://usaco.guide/problems/usaco-568-speeding-ticket/solution 