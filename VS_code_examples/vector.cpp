#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access elements of the vector
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers[1] << std::endl;
    std::cout << "Third element: " << numbers[2] << std::endl;

    // Iterate over the vector using a for loop
    std::cout << "All elements: ";
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Iterate over the vector using a range-based for loop
    std::cout << "All elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove an element from the vector
    numbers.pop_back();

    // Check the size of the vector
    std::cout << "Size of the vector: " << numbers.size() << std::endl;

    return 0;
}
