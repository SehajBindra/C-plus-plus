// object allocation in c++

#include <iostream>
using namespace std;

class Shop
{
    //   private
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    // declaration
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop s;
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.displayPrice();
    return 0;
}
