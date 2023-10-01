#include <iostream>
using namespace std;

int main()
{

    int Value;
    cin >> Value;

    if (Value < 0)
    {
        cout << "Negatif" << endl;
    }
    else if (Value % 2 == 0)
    {
        cout << "Positif Genap" << endl;
    }
    else
    {
        cout << "Positif Ganjil" << endl;
    }
    return 0;
}
