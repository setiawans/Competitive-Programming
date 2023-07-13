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
    int t;
    cin >> t;

    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (x == 1 && k == 1) {
            cout << "NO" << endl;
        } else if (k >= n) {
            if (n != x) {
                cout << "YES" << endl;
                cout << 1 << endl;
                cout << n << endl;
            } else {
                cout << "YES" << endl;
                cout << 2 << endl;
                cout << n-1 << " " << 1 << endl;
            }
        } else {
            if (x == 1) {
                if (k == 1) {
                    cout << "NO" << endl;
                } else if (k == 2) {
                    if (n % 2 == 0) {
                        cout << "YES" << endl;
                        cout << n/2 << endl;
                        for (int i = 0; i < n/2; i++) {
                            cout << 2;
                            if (i - 1 != n/2) {
                                cout << " ";
                            }
                        }
                        cout << "\n";
                    } else {
                        cout << "NO" << endl;
                    }
                } else {
                    if (n % 2 == 0) {
                        cout << "YES" << endl;
                        cout << n/2 << endl;
                        for (int i = 0; i < n/2; i++) {
                            cout << 2;
                            if (i - 1 != n/2) {
                                cout << " ";
                            }
                        }
                        cout << "\n";
                    } else {
                        cout << "YES" << endl;
                        if (n - 3 != 0) {
                            cout << (n-3)/2 + 1<< endl;
                            cout << 3;
                            cout << " ";
                            for (int i = 0; i < (n-3)/2; i++) {
                                cout << 2;
                                if (i - 1 != (n-3)/2) {
                                    cout << " ";
                                }
                            }
                            cout << "\n";
                        } else {
                            cout << 1 << endl;
                            cout << 3 << endl;
                        }
                    }
                }
            } else {
                cout << "YES" << endl;
                cout << n << endl;
                for (int i = 0; i < n; i++) {
                    cout << 1;
                    if (i - 1 != n) {
                        cout << " ";
                    }
                }
                cout << "\n";
            }
        }
    }
}

// sources : https://codeforces.com/contest/1845/status/page/268?order=BY_JUDGED_DESC
// problem : https://codeforces.com/contest/1845/problem/A