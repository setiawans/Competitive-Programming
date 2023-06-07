#include <iostream>

using namespace std;

void reversedAngka (int number[], int batas){
    for (int i = 0; i < batas; i++) {
        int reverse = 0;
        int temp = number[i];
        while (temp != 0){
            reverse = reverse*10 + temp%10;
            temp /= 10;
        }
        number[i] = reverse;
    }
}

int main() {
    int angka{}, temp{};
    cin >> angka;
    int arrayHasil[angka];

    for (int i = 0; i < angka; i++) {
        cin >> arrayHasil[i];
    }

    reversedAngka(arrayHasil, angka);

    for (int i = 0; i < angka; i++){
        cout << arrayHasil[i] << endl;
    }
}

// sources : https://tlx.toki.id/problems/toki-exercise-1/P01/