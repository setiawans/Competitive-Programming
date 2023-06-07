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
    int k, n, w;
    cin >> k >> n >> w;

    int biaya = 0;
    for (int i = 1; i <= w; i++) {
        biaya = biaya + (k*i);
    }

    int pinjam = biaya - n;
    if (pinjam < 0) {
        cout << 0 << endl;
    } else {
        cout << pinjam << endl;
    }
}