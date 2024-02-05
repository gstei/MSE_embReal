#include <iostream>
#include <cstdint>

template<typename T, int32_t NumCells>
class MyClass {
public:
    int x;
    int32_t NumCells1=NumCells;
    void printx(){
        std::cout << x << std::endl;
        std::cout << NumCells1 << std::endl;
    }
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    auto myClass = MyClass<int, 16321>();
    myClass.x = 5;
    myClass.printx();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
