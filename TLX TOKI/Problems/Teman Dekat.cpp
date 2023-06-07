#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

int kedekatan (int x, int y, int z) {
    if (z == 1) {
        return x + y;
    } else if (z == 2) {
        return x*x + y*y;
    } else {
        return x*x*x + y*y*y;
    }
}

int main () {
    int N, D;
    cin >> N >> D;

    int jumlahCara = (N*(N-1))/2;
    int a[N], b[N], hasil[jumlahCara];
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }
    
    int temp = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int c, d;
            c = abs(a[j] - a[i]);
            d = abs(b[j] - b[i]);
            hasil[temp] = kedekatan(c, d, D);
            temp++;
        }
    }

    int maks = 0;
    for (int i = 0; i < jumlahCara; i++) {
        if (hasil[i] >= maks) {
            maks = hasil[i];
        }
    }

    int min = maks;
    for (int i = 0; i < jumlahCara; i++) {
        if (hasil[i] <= min) {
            min = hasil[i];
        }
    }

    cout << min << " " << maks << endl;
}

// sources : https://tlx.toki.id/courses/basic/chapters/10/problems/F