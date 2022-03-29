#include <iostream>

#include "Section.h"

int main() {
    Section section;
    section.initFromDialog();
    std::cout << section.classname() << std::endl;
    std::cout << section.size() << std::endl;
    section.draw();

}