#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

#define ll long long
#define ull unsigned long long

using namespace std;

/*
int main()
{
    int N;
    cin >> N;

    int angka[N];
    for (int i = 0; i < N; i++) {
        cin >> angka[i];
    }

    for (int i = N-1; i >= 0; i--) {
        cout << angka[i];
    }
}
*/

/*
int main() {
    int N;
    cin >> N;

    int bebek[N];
    int jumlah = 0;

    for (int i = 0; i < N; i++) {
        cin >> bebek[i];
        jumlah = jumlah + bebek[i];
    }

    int rata = jumlah/N;
    int lulus = 0;
    for (int i = 0; i < N; i++) {
        if (bebek[i] >= rata) {
            lulus ++;
        }
    }

    cout << lulus << endl;
}
*/

/*
int main() {
    int N;
    cin >> N;
    
    int d[N][N], g[N][N], total[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> d[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> g[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            total[i][j] = d[i][j] + g[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << total[i][j];
            if (j+1 < N) {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
*/

int main() {
    int N;
    cin >> N;

    int hasil[N][N];
    for (int i = 0; i <N; i ++) {
        for (int j = 0; j < N; j++) {
            int temp;
            cin >> temp;
            hasil[i][j] = temp;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int temp;
            cin >> temp;
            hasil[i][j] += temp;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << hasil[i][j];
            if (j+1 < N) {
                cout << " ";
            }
        }
        cout << "\n";
    }
}