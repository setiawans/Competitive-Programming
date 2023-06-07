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
    string X;

    int total = 0;
    for (int i = 0; i < N; i++) {
        cin >> X;
        if (X[1] == '+'){
            total ++;
        } else {
            total --;
        }
    }

    cout << total << endl;
}