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

// ASCII 'a' adalah 97
// ASCII 'A' adalah 65

using namespace std;

void berhasil() {
    cout << "Tentu saja bisa!" << endl;
}

void gagal() {
    cout << "Wah, tidak bisa :(" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    string a, b;
    cin >> a;
    cin >> b;

    if (a.size() != b.size() + 1) {
        gagal();
        return 0;
    }

    int a_length = a.size();
    int salah = 0;
    int j = 0;
    for (int i = 0; i < a_length; i++) {
        if (a[i] != b[j]) {
            salah++;
            a_length --;
            continue;
        }
        j++;
    }

    if (salah > 1) {
        gagal();
    } else {
        berhasil();
    }
}