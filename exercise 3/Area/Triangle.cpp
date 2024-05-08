#include "Triangle.h"

namespace shapes {
    triangle::triangle() : base(0), height(0) {}

    triangle::triangle(double b, double h) : base(b), height(h) {}

    double triangle::get_base() const {
        return base;
    }

    double triangle::get_height() const {
        return height;
    }

    triangle::~triangle() {}
}
