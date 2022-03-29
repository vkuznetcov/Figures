//
// Created by vkuzn on 29.03.2022.
//

#ifndef UNTITLED4_ELLIPSE_H
#define UNTITLED4_ELLIPSE_H
#define PI 3.1415

#include "interfaces/BaseObject.h"
#include "interfaces/DialogInitiable.h"
#include "interfaces/Figure.h"
#include "interfaces/PhysObject.h"
#include "interfaces/Printable.h"
#include "interfaces/Vector2D.h"
#include <iostream>


class Ellipse : public BaseObject, public Printable, public DialogInitiable, public Figure, public PhysObject {
private:
    double a, b, massValue;
public:
    std::string classname() override {
        return "Ellipse";
    }

    unsigned int size() override {
        return sizeof(*this);
    }

    void initFromDialog() override {
        std::cout << "Enter a value: ";
        std::cin >> a;

        std::cout << "Enter b value: ";
        std::cin >> b;

        std::cout << "Enter mass value: ";
        std::cin >> massValue;
    }

    double perimeter() override {
        return (4 * (PI * a * b + a - b) / (a + b));
    }

    double square() override {
        return PI * a * b;
    }

    double mass() const override {
        return massValue;
    }

    Vector2D * position() override {
        auto *vector = new Vector2D;
        vector->x = b;
        vector->y = a;
        return vector;
    }

    bool operator==(const PhysObject &ob) const override {
        return mass() == ob.mass();
    }

    bool operator<(const PhysObject &ob) const override {
        return mass() < ob.mass();
    }

    void draw() override {
        std::cout << "a value: " << a << std::endl << "b value: " << b << std::endl << "mass  value: " << massValue
                  << std::endl;
    }

};


#endif //UNTITLED4_ELLIPSE_H
