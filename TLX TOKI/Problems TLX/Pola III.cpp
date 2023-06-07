#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int X{}, bilangan{};
    cin >> X;

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < i+1; j++){
            cout << bilangan % 10;
            bilangan ++;
        }
        cout << "\n";
    }
}