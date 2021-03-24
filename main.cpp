#include <iostream>

class Base{
public:
    void method(){
        std::cout << "Base::method()" << std::endl;
    }
};

class Derived: public Base{
public:
    void method(){
        std::cout << "Derived::method()" << std::endl;
    }
};

int main() {
    Base b;
    Derived d;
    b.method();
    d.method();
    Base &rb = d; //rb jest alternatywna etykieta dla zmiennej d
    rb.Base::method();
    Base *ptrb = &d;
    ptrb -> method();
}
