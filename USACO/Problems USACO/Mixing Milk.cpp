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
    freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);

    vii total(3);
    vii capacity(3);
    for (int i = 0; i < 3; i++) {
        cin >> capacity[i] >> total[i];
    }

    int a = 0;
    int b = 1;
    for (int i = 0; i < 100; i++) {
        total[b] = total[a] + total[b];
        total[a] = 0;
        if (total[b] > capacity[b]) {
            total[a] = total[b] - capacity[b];
            total[b] = capacity[b];
        }
        a++;
        b++;
        if (a == 3) {
            a = 0;
        } else if (b == 3) {
            b = 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << total[i] << endl;
    }
}