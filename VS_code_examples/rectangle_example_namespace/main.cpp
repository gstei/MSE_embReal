#include <iostream>
#include "rectangle.h"

int main() {
    double length, width;

    // Get the length and width of the rectangle from the user
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Calculate the area of the rectangle using the rectangle function
    Geometry::rectangle rectangle1;
    rectangle1.calcArea(length,width);
    double area=rectangle1.getArea();
    // rectangle1.calcArea(length, width);
    // double area = rectangle1.getArea();
    // double area = 0;

    // Print the area of the rectangle
    std::cout << "The area of the rectangle is: " << area << std::endl;
    return 0;
}