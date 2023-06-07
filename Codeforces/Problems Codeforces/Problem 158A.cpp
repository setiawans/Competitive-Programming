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
    int n, k;
    cin >> n >> k;

    int x[n];
    int lolos = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    int batas = x[k-1];
    for (int i = 0; i < n; i++) {
        if ((x[i] > 0) && (x[i] >= batas)) {
            lolos++;
        }
    }
    cout << lolos << endl;
}