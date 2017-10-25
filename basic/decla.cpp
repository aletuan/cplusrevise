#include <iostream>

void doPrint(); // forward declaration (using function prototype)

int main() {
    std::cout << "Starting main()" << std::endl;
    doPrint();
    std::cout << "Ending main()" << std::endl;

    return 0;    
}

void doPrint() 
{
    std::cout << "In doPrint()" << std::endl;
}