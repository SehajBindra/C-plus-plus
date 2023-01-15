// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     // Creating a Constructor
//     // Constructor is a special member function with the same name as of the class.
//     // It is used to initialize the objects of its class
//     // It is automatically invoked whenever an object is created

//     Complex(void); // Constructor declaration

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
// {
//     a = 10;
//     b = 0;
//     // cout<<"Hello world";
// }

// int main()
// {
//     Complex c1, c2, c3;
//     c1.printNumber();
//     c2.printNumber();
//     c3.printNumber();

//     return 0;
// }

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);
    //    constructor Declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << endl;
    }
};

// constructor intialization

Complex::Complex(void)
{
    a = 8;
    b = 16;
}

int main()
{
    Complex c1;
    c1.printNumber();

    return 0;
};
