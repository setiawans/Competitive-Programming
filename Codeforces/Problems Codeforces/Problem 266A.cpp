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
    int N;
    cin >> N;

    string x;
    cin >> x;

    int count = 0;

    for (int i = 0; i < N-1; i++) {
        if (x[i] == x[i+1]) {
            count ++;
        }
    }

    cout << count << endl;
}