//
// Created by Bryan Martinez on 5/5/22.
//

#ifndef OOP_FINAL_PROJECT_DYNAMIC_H
#define OOP_FINAL_PROJECT_DYNAMIC_H
#include <list>
using namespace std;
class Dynamic {
    list<function<void()>> functions;

    Dynamic();

    void remove_func(f);
    void add_func(f);
};


#endif //OOP_FINAL_PROJECT_DYNAMIC_H
