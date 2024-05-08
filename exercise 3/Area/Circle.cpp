#include "circle.h"

namespace shapes {
    circle::circle() : radius(0) {}

    circle::circle(double r) : radius(r) {}

    double circle::get_radius() const {
        return radius;
    }

    circle::~circle() {}
}
