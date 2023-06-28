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
    freopen("buckets.in", "r", stdin);
	freopen("buckets.out", "w", stdout);
    
    int b_x = 0, b_y = 0, l_x = 0, l_y = 0, r_x = 0, r_y = 0;
    for (int i = 0; i < 10; i++) {
        string x;
        cin >> x;

        for (int j = 0; j < 10; j++) {
            if (x[j] == 'B') {
                b_x = i;
                b_y = j;
            } else if(x[j] == 'L') {
                l_x = i;
                l_y = j;
            } else if (x[j] == 'R') {
                r_x = i;
                r_y = j;
            }
        }
    }

    int dist = abs(b_x - l_x) + abs(b_y - l_y) - 1;

    if (b_x == l_x && r_x == b_x && ((l_y < r_y && r_y < b_y) || (b_y < r_y && r_y < l_y))) {
        dist += 2;
    } else if (b_y == l_y && r_y == b_y && ((l_x < r_x && r_x < b_x) || (b_x < r_x && r_x < l_x))) {
        dist += 2;
    }

    cout << dist << endl;
}

// sources : http://www.usaco.org/index.php?page=viewproblem2&cpid=939
// solution : https://usaco.guide/problems/usaco-939-bucket-brigade/solution