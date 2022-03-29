//
// Created by vkuzn on 29.03.2022.
//

#ifndef UNTITLED4_BASEOBJECT_H
#define UNTITLED4_BASEOBJECT_H
#include <iostream>


class BaseObject {
public:
// Имя класса (типа данных).
    virtual std::string classname() = 0;
// Размер занимаемой памяти.
    virtual unsigned int size() = 0;
};


#endif //UNTITLED4_BASEOBJECT_H
