#include <memory>
enum state {
        On,
        Off
    };
struct Object {
    state state;
    // Define the structure of your object here
};

int main() {
    // Create a memory pool containing 3 objects
    std::shared_ptr<Object[]> memoryPool(new Object[3]);

    // Use the memory pool through the smart pointer
    for (int i = 0; i < 3; i++) {
        memoryPool[i];
        /* Access and manipulate the object properties here */
    }
    // delete memoryPool


    // The memory will be automatically deallocated when the smart pointer goes out of scope

    return 0;
}
