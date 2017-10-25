#include <iostream>
#include <string>

int main() {
    // initialize string sample
    std::string name("Tuan Anh Le");
    name = "Ke Son Le";
    std::cout << "My father name is: " << name << std::endl;

    std::string age;
    std::cout << "Enter your father age: ";
    std::cin >> age;

    std::cout << "Your father name is " << name << " and his age is " << age << std::endl;

    return 0;
}