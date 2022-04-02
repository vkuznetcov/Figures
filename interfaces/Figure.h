//
// Created by vkuzn on 29.03.2022.
//

#ifndef UNTITLED4_FIGURE_H
#define UNTITLED4_FIGURE_H


class Figure: public BaseObject {
public:
// Площадь.
    virtual double square() = 0;
// Периметр.
    virtual double perimeter() = 0;
};


#endif //UNTITLED4_FIGURE_H
