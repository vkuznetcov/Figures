#include <vector>
#include "interfaces/BaseObject.h"
#include "interfaces/Printable.h"
#include <algorithm>

#include "Section.h"
#include "Ellipse.h"

using namespace std;

void addMenu() {
    cout << "1. Add section" << endl;
    cout << "2. Add ellipse" << endl;
    cout << "Your choice: ";
}

void mainMenu() {
    cout << "1. Add new elements to vector" << endl;
    cout << "2. Print all elements" << endl;
    cout << "3. Print square of all elements" << endl;
    cout << "4. Print perimeter of all elements" << endl;
    cout << "5. Print center of mass of all elements" << endl;
    cout << "6. Memory allocation for all elements" << endl;
    cout << "7. Sort elements by mass" << endl;
    cout << "8. Exit program" << endl;
    cout << "Your choice: ";
}

int main() {
    std::vector<BaseObject *> vect;
    while (true) {
        mainMenu();
        switch (getchar()) {
            case '1': {
                getchar();
                addMenu();
                switch (getchar()) {
                    case '1': {
                        Section *section = new Section;
                        section->initFromDialog();
                        vect.push_back(static_cast<Printable *>(section));
                        break;
                    }
                    case '2': {
                        Ellipse *section = new Ellipse;
                        section->initFromDialog();
                        vect.push_back(static_cast<Printable *>(section));
                        break;
                    }
                }
                break;
            }
            case '2': {
                getchar();
                for (auto i = 0; i < vect.size(); i++) {
                    cout << "Element[" << i << "]: " << vect[i]->classname() << ";";
                    dynamic_cast<Printable *>(vect[i])->draw();
                }
                break;
            }
            case '3': {
                getchar();
                double square = 0;
                for (auto & i : vect) {
                    if(dynamic_cast<Figure *>(i))
                        square += dynamic_cast<Figure *>(i)->square();
                }
                cout << "Square: " << square << endl;
                break;
            }
            case '4': {
                getchar();
                double perimeter = 0;
                for (auto & i : vect) {
                    if(dynamic_cast<Figure *>(i))
                        perimeter += dynamic_cast<Figure *>(i)->perimeter();
                }
                cout << "Perimeter: " << perimeter << endl;
                break;
            }
            case '5': {
                getchar();
                double x = 0;
                double y = 0;
                double ms = 0;
                for(auto & i : vect)
                {
                    x+=dynamic_cast<PhysObject*>(i)->position()->x*dynamic_cast<PhysObject*>(i)->mass();
                    y+=dynamic_cast<PhysObject*>(i)->position()->y*dynamic_cast<PhysObject*>(i)->mass();
                    ms+=dynamic_cast<PhysObject*>(i)->mass();
                }
                x /=ms;
                y /=ms;
                std::cout<<"Center: x = " << x << ", y = "<<y <<std::endl;
                break;
            }
            case '6': {
                getchar();
                int mem = 0;
                for (auto & i : vect) {
                    mem += i->size();
                }
                cout << "Memory amount: " << mem << endl;
                break;
            }
            case '7': {
                getchar();
                for(int i = 0; i < vect.size(); i++){
                    for(int j = 0; j < vect.size() - 1; j++){
                        if(dynamic_cast<PhysObject*>(vect[j])->mass() > dynamic_cast<PhysObject*>(vect[j + 1])->mass()){
                            swap(vect[j], vect[j + 1]);
                        }
                    }
                }
                break;
            }
            case '8': {
                return 0;
            }
            default: {
                cout << "There is no such option. Try again" << endl;
                break;
            }
        }
    }
    int a;
}