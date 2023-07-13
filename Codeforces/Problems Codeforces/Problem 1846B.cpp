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
#define DEBUG(str, var) cout << str << " " << var << nl;
#define nl "\n"
#define vii vector<int>
#define vll vector<long long>
#define vss vector<string>
#define vbb vector<bool>
#define pb push_back
#define wickers ios_base::sync_with_stdio(false); cin.tie(0);

// ASCII 'a' adalah 97
// ASCII 'A' adalah 65

using namespace std;

int main()
{
    wickers
    /* Older USACO Problem Template
    freopen("problemname.in", "r", stdin);
	freopen("problemname.out", "w", stdout);
    */
    int t;
    cin >> t;

    while(t--) {
        char arr[4][4];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
            }
        }

        if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') {
            cout << "X" << endl;
        } else if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') {
            cout << "X" << endl;
        } else if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') {
            cout << "X" << endl;
        } else if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') {
            cout << "X" << endl;
        } else if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') {
            cout << "X" << endl;
        } else if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') {
            cout << "X" << endl;
        } else if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') {
            cout << "X" << endl;
        } else if (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X') { // X border
            cout << "X" << endl;
        } else if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') {
            cout << "O" << endl;
        } else if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') {
            cout << "O" << endl;
        } else if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') {
            cout << "O" << endl;
        } else if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') {
            cout << "O" << endl;
        } else if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') {
            cout << "O" << endl;
        } else if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') {
            cout << "O" << endl;
        } else if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') {
            cout << "O" << endl;
        } else if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O') {
            cout << "O" << endl;
        } else if (arr[0][0] == '+' && arr[0][1] == '+' && arr[0][2] == '+') { // O Border
            cout << "+" << endl;
        } else if (arr[1][0] == '+' && arr[1][1] == '+' && arr[1][2] == '+') {
            cout << "+" << endl;
        } else if (arr[2][0] == '+' && arr[2][1] == '+' && arr[2][2] == '+') {
            cout << "+" << endl;
        } else if (arr[0][0] == '+' && arr[1][0] == '+' && arr[2][0] == '+') {
            cout << "+" << endl;
        } else if (arr[0][1] == '+' && arr[1][1] == '+' && arr[2][1] == '+') {
            cout << "+" << endl;
        } else if (arr[0][2] == '+' && arr[1][2] == '+' && arr[2][2] == '+') {
            cout << "+" << endl;
        } else if (arr[0][0] == '+' && arr[1][1] == '+' && arr[2][2] == '+') {
            cout << "+" << endl;
        } else if (arr[0][2] == '+' && arr[1][1] == '+' && arr[2][0] == '+') {
            cout << "+" << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }
}

// source : https://codeforces.com/contest/1846/problem/B