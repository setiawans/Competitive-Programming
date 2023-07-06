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

    vii arr(3);
    for (int i = 0; i < 3; i++) {
        arr[i] = 0;
    }

    vii value(t);
    for(int i = 0; i < t; i++) {
        cin >> value[i];
        if (value[i] == 1) {
            arr[0]++;
        } else if (value[i] == 2) {
            arr[1]++;
        } else {
            arr[2]++;
        }
    }

    int min = 1e5;
    for (int i = 0; i < 3; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << min << endl;

    if (min == 0) {
        return 0;
    } else {
        vector<bool> arr2(t);
        for (int i = 0; i < t; i++) {
            arr2[i] = true;
        }

        while(min--) {
            for (int i = 0; i < t; i++) {
                if (value[i] == 1 && arr2[i] == true) {
                    cout << i+1 << " ";
                    arr2[i] = false;
                    break;
                }
            }

            for (int i = 0; i < t; i++) {
                if (value[i] == 2 && arr2[i] == true) {
                    cout << i+1 << " ";
                    arr2[i] = false;
                    break;
                }
            }

            for (int i = 0; i < t; i++) {
                if (value[i] == 3 && arr2[i] == true) {
                    cout << i+1;
                    arr2[i] = false;
                    break;
                }
            }
            cout << "\n";
        }
    }
}