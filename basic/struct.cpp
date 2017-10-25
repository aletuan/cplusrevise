#include <iostream>

struct Person
{
    int age;
    double weight;
};

int main() {
    Person person;
    Person *ptr = &person;
    Person &ref = person;
    
    (*ptr).age = 10;

    std::cout << "Person age: " << (*ptr).age << std::endl;

    return 0;   
}