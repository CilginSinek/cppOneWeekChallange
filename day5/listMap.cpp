#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

const string YEM = "yem";
const string BOSLUK = "bosluk";

const string Bas = "Bas";
const string Govde = "Govde";
const string Uc = "Uc";

class Yilan
{
public:
    enum type
    {
        Bas,
        Govde,
        Uc
    };
    type Type;
    list<int> Cordinate;
};

class Square
{
public:
    enum type
    {
        YEM,
        BOSLUK,
        Yilan
    };
    type Type;
    int x;
    int y;
};

vector<vector<Square>> ListMaker(int satir_sayisi, int sutun_sayisi)
{
    vector<vector<Square>> twoDArray(satir_sayisi, vector<Square>(sutun_sayisi));

    for (int i = 0; i < satir_sayisi; ++i)
    {
        for (int j = 0; j < sutun_sayisi; ++j)
        {
            twoDArray[i][j].Type = Square::BOSLUK;
            twoDArray[i][j].x = i;
            twoDArray[i][j].y = j;
        }
    }

    return twoDArray;
}

int main()
{
    const int satir_sayisi = 1;
    const int sutun_sayisi = 4;

    vector<vector<Square>> List = ListMaker(satir_sayisi, sutun_sayisi);

    return 0;
}