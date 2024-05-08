// main.cpp

#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int _main() {
    char choice;
    do {
        cout << "Select a shape to calculate its area:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                float side;
                cout << "Enter side length of square: ";
                cin >> side;
                Square square(side);
                cout << "Area of square: " << Area::calculateArea(square) << endl;
                break;
            }
            case '2': {
                float base, height;
                cout << "Enter base length of triangle: ";
                cin >> base;
                cout << "Enter height of triangle: ";
                cin >> height;
                triangle triangle(base, height);
                cout << "Area of triangle: " << Area::calculateArea(triangle) << endl;
                break;
            }
            case '3': {
                float radius;
                cout << "Enter radius of circle: ";
                cin >> radius;
                circle circle(radius);
                cout << "Area of circle: " << Area::calculateArea(circle) << endl;
                break;
            }
            case '4':
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
