#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

// class Yem {
// public:
//     string name;
// };


// class Square
// {
// public:
//     enum type {
//         Yem,
//     };
//     int age;

//     void printInfo()
//     {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     };
// };
int main()
{
    int list[] = {10, 20, 30, 40, 50};
    // list.push_back(60);
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", list[i]);
    }
    return 0;
}