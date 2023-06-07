#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

/*
int main()
{
    int N, R, C;
    cin >> N;
    R = 1;
    C = N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i*j == N) {
                if (abs(R-C) > abs(i-j)) {
                    R = i;
                    C = j;
                }
            }
        }
    }
    cout << R << " " << C;
}
*/

/*
int main() {
    int N, R, C;
    cin >> N;
    R = 1;
    C = N;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            int j = N/i;
            if (abs(R-C) > abs(i-j)){
                R = i;
                C = j;
            }
        }
    }

    cout << R << " " << C;
}
*/

/*
int main() {
    int N, C, R;
    cin >> N;
    R = 1;
    C = N;

    for (int i = 1; i <= sqrt(N); i++){
        if (N % i == 0){
            int j = N/i;
            if (abs(R-C) > abs(i-j)){
                R = i;
                C = j;
            }
        }
    }

    cout << R << " " << C;
}
*/

int main() {
    int N, C, R;
    cin >> N;
    R = 1;
    C = N;

    int i = 1;
    while (i*i <= N){
        if (N % i == 0){
            int j = N/i;
            if (abs(R-C) > abs(i-j)){
                R = i;
                C = j;
            }
        }
        i++;
    }
    cout << R << " " << C;
}