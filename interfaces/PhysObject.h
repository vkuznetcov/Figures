//
// Created by vkuzn on 29.03.2022.
//

#ifndef UNTITLED4_PHYSOBJECT_H
#define UNTITLED4_PHYSOBJECT_H


#include "Vector2D.h"

class PhysObject {
public:
// Масса, кг.
    virtual double mass() const = 0;
// Координаты центра масс, м.
    virtual Vector2D * position() = 0;
// Сравнение по массе.
    virtual bool operator== ( const PhysObject& ob ) const = 0;
// Сравнение по массе.
    virtual bool operator< ( const PhysObject& ob ) const = 0;
};


#endif //UNTITLED4_PHYSOBJECT_H
