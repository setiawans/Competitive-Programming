#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;
int angka[1000000];
bool first = true;
int faktor (int &x, int y) {
    int ret = 0;
    while (x % y == 0) {
        x /= y;
        ret ++;
    }
    
    return ret;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 2; i <= N; i++) {
        if (N % i == 0) {
            angka[i] = faktor(N, i);
            if (angka[i] > 0) {
                if (first) {
                    first = false;
                } else {
                    cout << " x ";
                }
            }
            cout << i;
            if (angka[i] > 1) {
                cout << "^" << angka[i];
            }
        }   
    }
}

// sources : https://tlx.toki.id/courses/basic/chapters/10/problems/D