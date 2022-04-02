//
// Created by vkuzn on 29.03.2022.
//

#ifndef UNTITLED4_PRINTABLE_H
#define UNTITLED4_PRINTABLE_H


class Printable: public BaseObject {
public:
// Отобразить на экране
// (выводить в текстовом виде параметры фигуры).
    virtual void draw() = 0;
};


#endif //UNTITLED4_PRINTABLE_H
