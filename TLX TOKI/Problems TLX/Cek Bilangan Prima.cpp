#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    int N;
    cin >> N;

    int ans;
    for (int i = 0; i < N; i++) {
        cin >> ans;

        bool isPrime = true;
        if (ans < 2) {
            isPrime = false;
        }

        for (int j = 2; j <= sqrt(ans); j++) {
            if (ans % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
    }
}