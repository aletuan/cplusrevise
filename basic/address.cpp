#include <iostream>
#include <typeinfo>

int main()
{
    int x = 5;
    int *ptr = &x;

    std::cout << x << "\n";

    // this, NOT, return address, but a POINTER
    std::cout << &x << "\n";
    std::cout << ptr << "\n";
    
    // dereferencing pointer
    std::cout << *&x << "\n";
    std::cout << *ptr << "\n";

    std::cout << "Type of &x " << std::endl;
    std::cout << typeid(&x).name() << "\n";
    

    return 0;
}