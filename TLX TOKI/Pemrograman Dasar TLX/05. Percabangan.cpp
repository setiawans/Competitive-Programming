#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    cin >> x;
    
    if (x > 0) {
        cout << "Positif" << endl;
    } else if (x == 0) {
        cout << "Nol" << endl;
    } else {
        cout << "Negatif" << endl;
    }
}