#include <iostream>
using namespace std;

int main() {
    int c, d;
    cin >> c >> d;
    int matriks[c][d];
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            cin >> matriks[i][j];
        }
    }
    for (int i = c - 1; i >= 0; i--) {
        for (int j = d -1; j >= 0; j--) {
            cout << matriks[i][j] << " ";
     }
         cout << endl;
    }
    return 0;
}
