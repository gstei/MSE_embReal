#include <iostream>

// Template function to find the maximum of two values
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

// Template class to represent a pair of values
template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }
};

int main() {
    // Using the max template function
    int maxInt = max(5, 10);
    double maxDouble = max(3.14, 2.71);

    std::cout << "Max of 5 and 10: " << maxInt << std::endl;
    std::cout << "Max of 3.14 and 2.71: " << maxDouble << std::endl;

    // Using the Pair template class
    Pair<int, double> myPair(10, 3.14);
    std::cout << "Pair: " << myPair.first << ", " << myPair.second << std::endl;

    return 0;
}
