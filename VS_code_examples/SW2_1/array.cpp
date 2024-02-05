#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdint>
#include <algorithm>
#include <vector>
#include <array>
#include <numeric>

int main() {
    // Seed the random number generator
    std::srand(std::time(nullptr));

    // Create an array of int32_t with 6 elements (this is not a container class 
    // ==> no begin() method
    int32_t arr[6]={0,0,0,0,0,0};
    // Fill the array with random values
    for (int i = 0; i < 6; i++) {
        arr[i] = std::rand() % 32768 - 16384;
    }
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += arr[i];
    }
    // sort array
    std::sort(&arr[0] + 3, &arr[0] + 6);
    // Create a vector
    std::vector<int16_t> vec;
    vec.begin();
    // Print the array
    for (int i = 0; i < 6; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Allocate memory
    // int* ptr = (int*)malloc(sizeof(int) * 10);
    // realloc(ptr, sizeof(int) * 9);
    // free(ptr);
    int a = 10;
    int* ptr2 = &a;
    std::cout << *ptr2 << std::endl;
    std::cout << ptr2 << std::endl;
    std::cout << &ptr2 << std::endl;
    std::cout << &a << std::endl;

    // Create an array of int32_t with 6 elements (this is a container class)
    std::array<int32_t, 6> RingBufferAxisX = {0, 0, 7, 0, 0, 0};
    double mean = (double)std::accumulate(RingBufferAxisX.begin(), RingBufferAxisX.end(), 0LL) / RingBufferAxisX.size();
    std::cout << "Mean: " << mean << std::endl;
    std::cout << *RingBufferAxisX.begin() << std::endl;


    std::vector<int, uint32_t> vec2;


    return 0;
}
