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
    /* Older USACO Problem Template
    freopen("problemname.in", "r", stdin);
	freopen("problemname.out", "w", stdout);
    */
    int M, A, B;
    cin >> M >> A >> B;

    int maks = A;
    if (A > B) {
        maks = B;
    }

    int A_sisa = A%2;
    int B_sisa = B%2;

    int min = 0;
    if (A_sisa + B_sisa == 2 && A + B == 2*M) {
        min = 1;
    } 

    cout << min << " " << maks << endl;
}