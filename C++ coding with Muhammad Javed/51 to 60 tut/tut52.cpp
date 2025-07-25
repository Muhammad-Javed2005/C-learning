#include <iostream>

#include <string>

using namespace std;

class ShopItem
{
    int ID;
    float Price;

public:
    void setData(int a, float b)
    {
        ID = a;
        Price = b;
    }

    void getData(void)
    {
        cout << "Code of this Item is : " << ID << endl;
        cout << "Price of this Item is : " << Price << endl;
    }
};

int main()
{

    int size = 4;
    int i, p;
    float q;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    for (i = 0; i < size; i++)
    {
        cout << "Enter ID and Price of Item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item Number " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}