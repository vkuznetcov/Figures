//
// Created by vkuzn on 29.03.2022.
//

#ifndef UNTITLED4_SECTION_H
#define UNTITLED4_SECTION_H

#include "interfaces/BaseObject.h"
#include "interfaces/DialogInitiable.h"
#include "interfaces/Figure.h"
#include "interfaces/PhysObject.h"
#include "interfaces/Printable.h"
#include "interfaces/Vector2D.h"
#include <iostream>


class Section : public Printable, public DialogInitiable, public PhysObject {
private:
    double x1, x2, massValue;
public:
    void initFromDialog() override {
        std::cout << "Input x1 value: ";
        std::cin >> x1;

        std::cout << "Input x2 value: ";
        std::cin >> x2;

        std::cout << "Input mass value: ";
        std::cin >> massValue;
    }

    void draw() {
        std::cout << "x1 value: " << x1 << "; x2 value: " << x2 << "; mass value: " << massValue << std::endl;
    }

    std::string classname() {
        return "Section";
    }

    uint32_t size() {
        return sizeof(*this);
    }

    double mass() const override {
        return massValue;
    }

    Vector2D *position() override {
        Vector2D *vector = new Vector2D;
        vector->x = (x2 + x1) / 2;
        vector->y = 0;
        return vector;
    }

    bool operator==(const PhysObject &ob) const override {
        return this->mass()==ob.mass();
    }

    bool operator<(const PhysObject &ob) const override {
        return this->mass() < ob.mass();
    }
};


#endif //UNTITLED4_SECTION_H
