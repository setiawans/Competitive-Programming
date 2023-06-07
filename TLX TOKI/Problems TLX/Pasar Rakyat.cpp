#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int fpb (int x, int y){
    if (y==0){
        return x;
    } 

    return fpb (y, x % y);
}

int kpk (int arrayAngka[], int batas){
    int ans = arrayAngka[0];
    for (int i = 1; i < batas; i++){
        ans = (arrayAngka[i]*ans)/fpb(arrayAngka[i],ans);
    }
    
    return ans;
}

int main() {
    int N{};
    cin >> N;

    int D[N];
    for (int i = 0; i < N; i++){
        cin >> D[i];
    }

    cout << kpk(D, N) << endl;
}

// sources : https://tlx.toki.id/problems/osn-2010/2E/