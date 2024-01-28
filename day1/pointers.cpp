#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*Mami)(int, int) = &add;
    int sex = 5;
    int *hebe = &sex;
    cout << Mami(4, 5);
    cout << "\n";
    //* orjinal sayı
    cout << *hebe;
    cout << "\n";
    //* adresi
    cout << &hebe;
    return 0;
}