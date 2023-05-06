#pragma once
#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.141592653589793238463;

class Point {
protected:
    double x;
    double y;

public:
    Point(double x, double y) : x(x), y(y) {}

    Point() : Point(0.0, 0.0) {}

    double get_x() const {
        return x;
    }

    double get_y() const {
        return y;
    }

    void set_x(double x) {
        this->x = x;
    }

    void set_y(double y) {
        this->y = y;
    }

    virtual void print() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }

    virtual ~Point() {}
};

class Ellipse : public Point {
protected:
    double a;
    double b;

public:
    Ellipse(double x, double y, double a, double b) : Point(x, y), a(a), b(b) {}

    Ellipse() : Ellipse(0.0, 0.0, 1.0, 1.0) {}

    double get_a() const {
        return a;
    }

    double get_b() const {
        return b;
    }

    void set_a(double a) {
        this->a = a;
    }

    void set_b(double b) {
        this->b = b;
    }

    virtual void print() const override {
        std::cout << "Ellipse(" << x << ", " << y << ", " << a << ", " << b << ")" << std::endl;
    }

    double area() const {
        return PI * a * b;
    }

    virtual ~Ellipse() {}
};

class Circle : public Ellipse {
public:
    Circle(double x, double y, double r) : Ellipse(x, y, r, r) {}

    Circle() : Circle(0.0, 0.0, 1.0) {}

    double get_r() const {
        return a; // radius = a = b for circle
    }

    void set_r(double r) {
        set_a(r);
        set_b(r);
    }

    virtual void print() const override {
        std::cout << "Circle(" << x << ", " << y << ", " << a << ")" << std::endl;
    }

    virtual ~Circle() {}
};