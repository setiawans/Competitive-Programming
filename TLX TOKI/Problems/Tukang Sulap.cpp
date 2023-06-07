#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int N;
    cin >> N;

    int angka[2][1001];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cin >> angka[i][j];
        }
    }

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        char huruf1[2], huruf2[2];
        int x, y;

        cin >> huruf1 >> x >> huruf2 >> y;
        int p = huruf1[0] - 'A';
        int q = huruf2[0] - 'A';
        x--;
        y--;

        swap(angka[p][x], angka[q][y]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cout << angka[i][j];
            if (j != N-1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// sources : https://tlx.toki.id/courses/basic/chapters/10/problems/B