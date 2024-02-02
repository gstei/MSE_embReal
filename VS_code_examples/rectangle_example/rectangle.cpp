#include "rectangle.h"

// Definition of the member function "getArea"
double rectangle::getArea(void) {
    return Area;
}

// Definition of the member function "setArea"
void rectangle::setArea(double Area) {
    rectangle::Area = Area;
}

// Definition of the member function "resetAreaToZero"
void rectangle::resetAreaToZero(void) {
    Area = 0;
}

// Definition of the member function "calcArea" with parameters
void rectangle::calcArea(double length, double width) {
    rectangle::length = length;
    rectangle::width = width;
    Area = width * length;
}

// Definition of the member function "calcArea" without parameters
void rectangle::calcArea(void) {
    Area = width * length;
}
