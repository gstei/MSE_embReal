#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
    float height;
};

int main() {
    // Create an instance of the Person struct
    Person person1;

    // Assign values to the struct members
    person1.name = "John";
    person1.age = 25;
    person1.height = 1.75;

    // Print the values of the struct members
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;
    std::cout << "Height: " << person1.height << std::endl;

    return 0;
}
