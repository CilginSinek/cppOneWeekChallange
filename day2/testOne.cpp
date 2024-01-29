#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int bar1 = 177, bar2 = 219;

    cout << "seg";

    for(int i = 0; i < 25; i++) {
        cout << char(bar1);
    }

    cout << "\r";
    cout << "\t\t\t\t";

    for(int i = 0; i < 25; i++) {
        cout << char(bar2);
    }

    return 0;
}