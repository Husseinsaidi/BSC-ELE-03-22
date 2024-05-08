// Square.cpp

#include "Square.h"

namespace shapes {
    Square::Square() : sideLength(0.0) {
        // Default constructor
    }

    Square::Square(float side) : sideLength(side) {
        // Overloaded constructor
    }

    Square::~Square() {
        // Destructor
    }

    void Square::setSideLength(float side) {
        sideLength = side;
    }

    float Square::getSideLength() const {
        return sideLength;
    }
}
