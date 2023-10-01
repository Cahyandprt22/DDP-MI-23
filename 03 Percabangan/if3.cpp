#include <iostream>
using namespace std;

int main()
{
    int x;

    cin >> x;

    if (x >= 0 && x <= 5)
    {
        cout << "Satuan" << endl;
    }
    else if (x >= 10 && x <= 99)
    {
        cout << "Puluhan" << endl;
    }
    else if (x >= 100 && x <= 999)
    {
        cout << "Ratusan" << endl;
    }
    else
    {
        cout << "Tidak Tahu" << endl;
    }
    return 0;
}
