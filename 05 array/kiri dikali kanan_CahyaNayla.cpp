#include <iostream>
using namespace std;

int main() {
    int c, d;
    cin >> c >> d;
    for (int i = 1; i <= c; i++) {
        for (int j = 1; j <= d; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
