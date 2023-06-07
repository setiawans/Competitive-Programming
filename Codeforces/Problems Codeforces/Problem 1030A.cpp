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
    int x;
    cin >> x;
    bool isHard = false;

    for (int i = 0; i < x; i++) {
        int y;
        cin >> y;

        if (y == 1) {
            isHard = true;
            break;
        }
    }

    if (isHard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
}