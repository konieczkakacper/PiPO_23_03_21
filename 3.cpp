#include <iostream>
#include <vector>
#include <deque>
#include <map>


class Base{

};

class Derived:public Base{
public:
    void
};

int main(){
    std::vector<Base *>v;
    v.push_back(new Derived());
    v.push_back(new Base());
    v.push_back(new Derived());

    for (auto e: v){
        e->method();

    }
}