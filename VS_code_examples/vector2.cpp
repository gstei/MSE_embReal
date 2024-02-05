#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>

int main() {
    // Vector
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    vec.pop_back();

    std::cout << "Vector: ";
    for (const auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Deque
    std::deque<int> deq = {1, 2, 3, 4, 5};
    deq.push_front(0);
    deq.push_back(6);

    std::cout << "Deque: ";
    for (const auto& num : deq) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // List
    std::list<int> lst = {1, 2, 3, 4, 5};
    lst.push_front(0);
    lst.push_back(6);
    lst.pop_back();

    std::cout << "List: ";
    for (const auto& num : lst) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Forward List
    std::forward_list<int> flst = {1, 2, 3, 4, 5};
    flst.push_front(0);
    flst.pop_front();

    std::cout << "Forward List: ";
    for (const auto& num : flst) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
