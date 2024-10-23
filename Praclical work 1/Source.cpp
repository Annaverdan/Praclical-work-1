#include <iostream>
using namespace std;

void main()
{
    setlocale(0, "");
    cout << "Размер int: " << sizeof(int) << " байт" << endl;
    cout << "Размер short int: " << sizeof(short int) << " байт" << endl;
    cout << "Размер long int: " << sizeof(long int) << " байт" << endl;
    cout << "Размер float: " << sizeof(float) << " байт" << endl;
    cout << "Размер double: " << sizeof(double) << " байт" << endl;
    cout << "Размер long double: " << sizeof(long double) << " байт" << endl;
    cout << "Размер char: " << sizeof(char) << " байт" << endl;
    cout << "Размер bool: " << sizeof(bool) << " байт" << endl;

    int x1;
    unsigned int mask = 1 << sizeof(int) * 8 - 1;
    cout << "Первое задание" << endl;
    cin >> x1;
    for (int i = 1; i <= sizeof(int) * 8; i++)
    {
        putchar(mask & x1 ? '1' : '0');
        mask >>= 1;
        if (i % 8 == 0 || i == 1)
            putchar(' ');
    }
    cout << endl;

    union
    {
        int x2;
        float y;
    };
    mask = 1 << sizeof(int) * 8 - 1;
    cout << "Второе задание" << "\n";
    cin >> y;
    for (int i = 1; i <= sizeof(int) * 8; i++)
    {
        putchar(mask & x2 ? '1' : '0');
        mask >>= 1;
        if (i == 9 || i == 1)
            putchar(' ');
    }
    cout << endl;
}