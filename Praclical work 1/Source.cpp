#include <iostream>
using namespace std;

void main()
{
    setlocale(0, "");
    cout << "������ int: " << sizeof(int) << " ����" << endl;
    cout << "������ short int: " << sizeof(short int) << " ����" << endl;
    cout << "������ long int: " << sizeof(long int) << " ����" << endl;
    cout << "������ float: " << sizeof(float) << " ����" << endl;
    cout << "������ double: " << sizeof(double) << " ����" << endl;
    cout << "������ long double: " << sizeof(long double) << " ����" << endl;
    cout << "������ char: " << sizeof(char) << " ����" << endl;
    cout << "������ bool: " << sizeof(bool) << " ����" << endl;

    int x1;
    unsigned int mask = 1 << sizeof(int) * 8 - 1;
    cout << "������ �������" << endl;
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
    cout << "������ �������" << "\n";
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