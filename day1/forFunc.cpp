#include <iostream>
using namespace std;

int main()
{
    //* declere list variable
    int myList[5] = {10, 20, 30, 40, 50};
    //* for loop
    for (auto i : myList)
    {
        cout << i << "\n";
    }
    return 0;
}
