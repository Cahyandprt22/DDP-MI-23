#include <iostream>
using namespace std;

int main() {
    string c;
    cout <<"";
    getline(cin, c);
    for (int i = c.length()-1;i >= 0;i--) {
        cout << c[i];
 
    }
    cout << endl;
    return 0;
}
