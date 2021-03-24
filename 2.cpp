#include <iostream>
#include <vector>
#include <deque>

int main(){
    std::vector<int> v;
    v.resize(10);
    v.push_back(123);
    v[0] = 1;
    v[1] = v[10];
    auto x = v[2];
    v.at(1) = 20;
    v.at(2) = 30;
    v.at(100) = 123;
    auto it = v.begin();
    (*it) = 1000;
    std::sort(v.begin() +1, v.begin() + 5);

    for (auto e: v){
        std::cout << e << std::endl;
    }
}