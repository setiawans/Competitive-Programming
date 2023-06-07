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
    int n, h;
    cin >> n >> h;
    int width = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > h) {
            width += 2;
        } else {
            width ++;
        }
    }

    cout << width << endl;
}