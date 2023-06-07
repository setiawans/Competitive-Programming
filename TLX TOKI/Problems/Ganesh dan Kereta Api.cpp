#include <iostream>

using namespace std;

int main() {
    int N{};
    cin >> N;
    int numbers[N];

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    while (N--) {
        cout << numbers[N];
        if (N != 0){
            cout << ",";
        }
    }
}

// sources : https://tlx.toki.id/problems/ngoding-seru-2015-oct-pemula/C