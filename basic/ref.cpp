#include <iostream>
#include <typeinfo>

int main()
{
    int x = 5;
    int *ptr = &x;
    int &ref = x;

    std::cout << x << "\n";

    // this, NOT, return address, but a POINTER
    std::cout << &x << "\n";
    std::cout << ptr << "\n";
    
    // dereferencing pointer
    std::cout << *&x << "\n";
    std::cout << *ptr << "\n";

    // print reference
    std::cout << "This is reference value" << "\n";
    std::cout << ref << std::endl;

    // change reference value
    ref = 10;
    std::cout << x << "\n";

    std::cout << "Type of &x " << std::endl;
    std::cout << typeid(&x).name() << "\n";
    

    return 0;
}