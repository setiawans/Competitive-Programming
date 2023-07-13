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
#define vbb vector<bool>
#define pb push_back

// ASCII 'a' adalah 97
// ASCII 'A' adalah 65

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    /* Older USACO Problem Template
    freopen("problemname.in", "r", stdin);
	freopen("problemname.out", "w", stdout);
    */
    int t;
    cin >> t;

    vii value(4);
    for (int i = 1; i <= 4; i++) {
        value[i] = 0;
    }

    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            value[1] ++;
        } else if (x == 2) {
            value[2] ++;
        } else if (x == 3) {
            value[3] ++;
        } else {
            value[4] ++;
        }
    }

    if (value[1] != 0 && value[2] == 0 && value[3] == 0 && value[4] == 0) {
        if (value[1] < 4) {
            cout << 1 << endl;
        } else if (value[1] % 4 == 0){
            cout << value[1]/4 << endl;
        } else {
            cout << value[1]/4 + 1 << endl;
        }
        return 0;
    } else if (value[1] == 0 && value[2] != 0 && value[3] == 0 && value[4] == 0) {
        if (value[2] < 4) {
            cout << 1 << endl;
        } else if (value[2] % 2 == 0) {
            cout << value[2]/2 << endl;
        } else {
            cout << value[2]/2 + 1 << endl;
        }
        return 0;
    } else if (value[1] == 0 && value[2] == 0 && value[3] != 0 && value[4] == 0) {
        cout << value[3] << endl;
        return 0;
    } else if (value[1] == 0 && value[2] == 0 && value[3] == 0 && value[4] != 0) {
        cout << value[4] << endl;
        return 0;
    }

    int total = value[4];
    int ret = 0;
    if (value[2] == 1) {
        ret += 2;
    } else {
        if (value[2] % 2 == 0) {
            total += value[2]/2;
        } else {
            total += value[2]/2;
            ret += 2;
        }
    }

    int min = value[1];
    if (value[1] > value[3]) {
        min = value[3];
    }

    total += min;
    value[1] -= min;
    value[3] -= min;

    if (value[1] != 0) {
        ret += value[1];
        if (ret < 4) {
            total += 1;
        } else {
            if (ret % 4 == 0) {
                total += ret/4;
            } else {
                total += ret/4 + 1;
            }
        }
    } else if (value[3] != 0){
        total += value[3];
        if (ret != 0) {
            total ++;
        }
    } else {
        if (ret != 0) {
            total ++;
        }
    }
    cout << total << endl;
}

// source : https://codeforces.com/contest/158/problem/B