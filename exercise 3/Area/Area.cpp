// Area.cpp

#include "Area.h"
#include <cmath>

#define PI 3.14159265

namespace shapes {
    float Area::calculateArea(const Square& square) {
        return square.getSideLength() * square.getSideLength();
    }

    float Area::calculateArea(const triangle& triangle) {
        return 0.5 * triangle.getBase() * triangle.getHeight();
    }

    float Area::calculateArea(const circle& circle) {
        return PI * std::pow(circle.getRadius(), 2);
    }
}
