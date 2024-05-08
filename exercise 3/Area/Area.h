// Area.h

#ifndef AREA_H
#define AREA_H

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {
    class Area {
    public:
        static float calculateArea(const Square& square);
        static float calculateArea(const triangle& triangle);
        static float calculateArea(const circle& circle);
    };
}

#endif // AREA_H
