//
// Created by vkuzn on 29.03.2022.
//

#ifndef UNTITLED4_DIALOGINITIABLE_H
#define UNTITLED4_DIALOGINITIABLE_H


class DialogInitiable: public BaseObject {
public:
// Задать параметры объекта с помощью диалога с пользователем.
    virtual void initFromDialog() = 0;
};


#endif //UNTITLED4_DIALOGINITIABLE_H
