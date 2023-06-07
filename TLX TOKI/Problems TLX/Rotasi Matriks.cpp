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
    int M, N;
    cin >> M >> N;

    int matriks[M][N];
    int rotasiMatriks[N][M];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriks[i][j];
            rotasiMatriks[j][i] = matriks[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = M-1; j >= 0; j--) {
            cout << rotasiMatriks[i][j];
            if (j < M) {
                cout << " ";
            }
        }
        cout << "\n";
    }
}