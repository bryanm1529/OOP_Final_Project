//
// Created by Bryan Martinez on 5/5/22.
//

#include "Dynamic.h"

list<function<void()>> functions;

Dynamic::Dynamic(){
    functions.push_back(remove_func);
    functions.push_back(add_func);
};

void remove_func(f){};
void add_func(f){};
