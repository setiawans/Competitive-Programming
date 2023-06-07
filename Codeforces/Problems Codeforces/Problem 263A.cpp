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
    int matriks[5][5];
    int x, y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matriks[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriks[i][j] == 1) {
                x = i;
                y = j;
                break;
            }
        }
    }
    int total = abs(x-2) + abs(y-2);
    cout << total << endl;
}