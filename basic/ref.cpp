#include <iostream>
#include <typeinfo>

/*
void changeValueFalse(const int &ref)
{
    ref = 10;
}
*/

int main()
{
    const int x = 5;    
    const int &ref = x;

    std::cout << x << "\n";

    // this, NOT, return address, but a POINTER
    std::cout << &x << "\n";
    
    // dereferencing pointer
    std::cout << *&x << "\n";

    // print reference
    std::cout << "This is reference value" << "\n";
    std::cout << ref << std::endl;

    return 0;
}