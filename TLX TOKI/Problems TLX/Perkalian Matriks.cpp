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
    int N, M, P;
    cin >> N >> M >> P;

    int matriksA[N][M];
    int matriksB[M][P];
    int matriksC[N][P];

    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            cin >> matriksA[n][m];
        }
    }

    for (int m = 0; m < M; m++) {
        for (int p = 0; p < P; p++) {
            cin >> matriksB[m][p];
        }
    }

    int x = 0;
    int temp = 0;
    for (int n = 0; n < N; n++) {
        for (int p = 0; p < P; p++) {
            for (int m = 0; m < M; m++) {
                temp = temp + matriksA[n][m] * matriksB[m][p];
            }
            matriksC[n][p] = temp;
            temp = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            cout << matriksC[i][j];
            if (j+1 < P){
                cout << " ";
            }
        }
        cout << "\n";
    }
}

// Source : https://tlx.toki.id/courses/basic/chapters/09/problems/E
// Time complexity nya O(n^3) terlalu lambat, coba cari solusi O(n^2)