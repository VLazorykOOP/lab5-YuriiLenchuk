#pragma once
#include <iostream>

class Pair {
    int first, second;
public:
    Pair(int a, int b) : first(a), second(b) {}

    bool operator==(const Pair& other) const {
        return first == other.first && second == other.second;
    }

    Pair operator-(const Pair& other) const {
        return Pair(first - other.first, second - other.second);
    }

    int getFirst() const { return first; }
    int getSecond() const { return second; }

    void print() const {
        std::cout << "(" << first << ", " << second << ")";
    }
};

class Rational {
    Pair p;
public:
    Rational(int a, int b) : p(a, b) {}

    Rational operator+(const Rational& other) const {
        return Rational(p.getFirst() * other.p.getSecond() + other.p.getFirst() * p.getSecond(), p.getSecond() * other.p.getSecond());
    }

    Rational operator-(const Rational& other) const {
        return Rational(p.getFirst() * other.p.getSecond() - other.p.getFirst() * p.getSecond(), p.getSecond() * other.p.getSecond());
    }

    Rational operator*(const Rational& other) const {
        return Rational(p.getFirst() * other.p.getFirst(), p.getSecond() * other.p.getSecond());
    }

    Rational operator/(const Rational& other) const {
        return Rational(p.getFirst() * other.p.getSecond(), p.getSecond() * other.p.getFirst());
    }

    void print() const {
        p.print();
    }
};