#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class triangle {
    private:
        double base;
        double height;
    public:
        triangle(); // Default constructor
        triangle(double b, double h); // Overloaded constructor
        double get_base() const;
        double get_height() const;
        ~triangle(); // Destructor
    };
}

#endif // TRIANGLE_H
