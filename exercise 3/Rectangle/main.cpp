// main.cpp

#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;
    
    std::cout << "Enter length of rectangle 1: ";
    std::cin >> length;

    std::cout << "Enter width of rectangle 1: ";
    std::cin >> width;

    Rectangle rectangle1(length, width); // Create an instance of Rectangle class with overloaded constructor
    rectangle1.setLength(length);
    rectangle1.setWidth(width);

    std::cout << "Area of rectangle 1: " << rectangle1.calculateArea() << std::endl;

    std::cout << "Enter length of rectangle 2: ";
    std::cin >> length;

    std::cout << "Enter width of rectangle 2: ";
    std::cin >> width;

    Rectangle rectangle2(length, width); // Create another instance of Rectangle class with overloaded constructor
    rectangle2.setLength(length);
    rectangle2.setWidth(width);

    std::cout << "Area of rectangle 2: " << rectangle2.calculateArea() << std::endl;

    return 0;
}
