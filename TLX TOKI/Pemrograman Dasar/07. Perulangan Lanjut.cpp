#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

/*
int main()
{
    int X{}, Y{};
    cin >> X >> Y;

    for (int i=0; i<X; i++){
        for (int j=0; j<Y; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
*/

/*
int main() {
    int X, Y;
    cin >> X >> Y;

    int i = 0;
    while (i < X) {
        int j = 0;
        while (j < Y) {
            cout << "*";
            j ++;
        }
        cout << "\n";
        i++;
    }
}
*/

/*
int main() {
    int N{};
    cin >> N;

    for (int i = 0; i < N; i++){
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
*/

/*
int main(){
    int X;
    cin >> X;

    for (int i = X; i > 0; i--){
        for (int j = 0; j <= X; j++) {
            if (j >= i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
    cout << "\n";
    }
}
*/

/*
int main(){
    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        if (i == M) {
            break;
        }
        cout << i << endl;
    }

    cout << "selesai" << endl;

    return 0;
}
*/

/*
int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i <= N; i++){
        if (i % M == 0) {
            continue;
        }
        cout << i << endl;
    }
    cout << "selesai" << endl;

    return 0;
}
*/

/*
int main() {
    int N;
    cin >> N;

    bool prima = true;
    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            prima = false;
            break;
        }
    }

    if (prima) {
        cout << "bilangan prima" << endl;
    } else {
        cout << "bukan bilangan prima" << endl;
    }
}
*/

int main () {
    int N;
    cin >> N;

    int bilPrima = 0;
    int cur = 2;

    while (bilPrima < N) {
        bool prima = true;
        for (int i = 2; i <= cur-1; i++) {
            if (cur % i == 0) {
                prima = false;
                break;
            }
        }

        if(prima){
            cout << cur << endl;
            bilPrima ++;
        }

        cur ++;
    }
}