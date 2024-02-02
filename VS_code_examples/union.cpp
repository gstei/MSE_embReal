#include <iostream>

union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    MyUnion myUnion;
    myUnion.intValue = 10;

    std::cout << "Value as int: " << myUnion.intValue << std::endl;
    std::cout << "Value as float: " << myUnion.floatValue << std::endl;
    std::cout << "Value as char: " << myUnion.charValue << std::endl;

    myUnion.floatValue = 3.14;

    std::cout << "Value as int: " << myUnion.intValue << std::endl;
    std::cout << "Value as float: " << myUnion.floatValue << std::endl;
    std::cout << "Value as char: " << myUnion.charValue << std::endl;

    myUnion.charValue = 'A';

    std::cout << "Value as int: " << myUnion.intValue << std::endl;
    std::cout << "Value as float: " << myUnion.floatValue << std::endl;
    std::cout << "Value as char: " << myUnion.charValue << std::endl;

    return 0;
}
