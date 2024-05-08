#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class circle {
    private:
        double radius;
    public:
        circle(); // Default constructor
        circle(double r); // Overloaded constructor
        double get_radius() const;
        ~circle(); // Destructor
    };
}

#endif // CIRCLE_H
