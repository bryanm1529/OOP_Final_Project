//
// Created by Bryan Martinez on 5/5/22.
//

#ifndef OOP_FINAL_PROJECT_DYNAMIC_H
#define OOP_FINAL_PROJECT_DYNAMIC_H
#include <list>
#include <iostream>
using namespace std;


class Dynamic {

public:
    list<function<void()>>functions;


    function<void(function<void()>)> remove_func_object = remove_func();
    function<void(function<void()>)> add_func_object = add_func();




    struct remove_func {
        void operator()(function<void()> f) const {
            //Code to remove function from class
        }
    };

    struct add_func {
        void operator()(function<void()> f) const {
            //Code to add function from class
        }
    };
};


#endif //OOP_FINAL_PROJECT_DYNAMIC_H
