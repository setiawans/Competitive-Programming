#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N{};
    cin >> N;

    for (int i = N; i > 0; i--){
        if (N % i == 0) {
            cout << i << endl;
        }
    }
}