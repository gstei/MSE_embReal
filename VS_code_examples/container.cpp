#include <iostream>
#include <map>

int main() {
    // Declare a map with key as string and value as int
    std::map<std::string, int> myMap;

    // Add elements to the map
    myMap["apple"] = 5;
    myMap["banana"] = 3;
    myMap["orange"] = 7;

    // Access elements in the map
    std::cout << "Number of apples: " << myMap["apple"] << std::endl;

    // Iterate over the elements in the map
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find an element in the map
    auto it = myMap.find("banana");
    if (it != myMap.end()) {
        std::cout << "Number of bananas: " << it->second << std::endl;
    }

    // Erase an element from the map
    myMap.erase("orange");

    // Check if an element exists in the map
    if (myMap.count("orange") == 0) {
        std::cout << "Orange not found in the map." << std::endl;
    }

    return 0;
}
