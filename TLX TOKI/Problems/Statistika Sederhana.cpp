#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N{};
    cin >> N;

    int angka[N];

    for (int i=0; i < N; i++){
        cin >> angka[i];
    }

    int maks{};
    maks = angka[0];
    for (int i=0; i < N-1; i++){
        if (maks < angka[i+1]){
            maks = angka[i+1];
        }
    }

    int min{};
    min = angka[0];
    for (int i=0; i < N-1; i++){
        if (min > angka[i+1]){
            min = angka[i+1];
        }
    }

    cout << maks << " " << min << endl;
    return 0;
}

// sources : https://tlx.toki.id/courses/basic/chapters/06/problems/G