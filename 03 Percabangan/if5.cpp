#include <iostream>
using namespace std;

int main()
{
    char Value;
    cin >> Value;

    if (Value == 'A')
    {
        cout << "Nilai kamu 100" << endl;
    }
    else if (Value == 'B')
    {
        cout << "Nilai kamu 76 - 99" << endl;
    }
    else if (Value == 'C')
    {
        cout << "Nilai kamu dibawah 76 :(" << endl;
    }
    else
    {
        cout << "Nilai Invalid" << endl;
    }

    return 0;
}
